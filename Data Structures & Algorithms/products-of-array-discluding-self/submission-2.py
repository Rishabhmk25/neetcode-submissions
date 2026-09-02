class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        pre = [1]*n
        suf = [1]*n
        for i in range(1, n):
            pre[i] = pre[i-1]*nums[i-1]
            suf[n-1-i] = suf[n-i]*nums[n-i]
        v = [0]*n
        for i in range(n):
            v[i] = pre[i]*suf[i]
        return v