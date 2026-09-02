class Solution:
    def trap(self, height: List[int]) -> int:
        s = sum(height)
        prev = 0
        l = 0
        r = len(height)-1
        total = 0
        while l <= r:
            h = min(height[l], height[r])
            if h > prev:
                total += (r-l+1)*(h-prev)
                prev = h
            if height[l] > height[r]:
                r -= 1
            else:
                l += 1
        return total-s