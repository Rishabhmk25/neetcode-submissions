class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        b = prices[0]
        p = 0
        for i in range(1, len(prices)):
            b = min(b, prices[i])
            p = max(p, prices[i]-b)
        return p