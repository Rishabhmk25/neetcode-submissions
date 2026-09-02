class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        v = set(nums)
        ans = 0
        for x in v:
            if x - 1 not in v:
                c = 1
                while x+c in v:
                    c += 1
                ans = max(c, ans)
        return ans