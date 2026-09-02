class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        v = sorted(nums)
        n = len(v)
        ans = []
        for i in range(n):
            if i > 0 and v[i] == v[i-1]:
                continue
            l = i + 1
            r = n - 1
            while l < r:
                s = v[i] + v[l] + v[r]
                if s > 0:
                    r -= 1
                elif s < 0:
                    l += 1
                else:
                    ans.append([v[i], v[l], v[r]])
                    l +=1
                    r -= 1
                    while l < r and v[l] == v[l-1]:
                        l += 1
                    while l < r and v[r] == v[r+1]:
                        r -= 1
        return ans