class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        for i in nums:
            if i not in mp:
                mp[i] = 0
            mp[i] += 1
        items = sorted(mp.items(), key = lambda x: x[1], reverse = True)
        return [x[0] for x in items[:k]]