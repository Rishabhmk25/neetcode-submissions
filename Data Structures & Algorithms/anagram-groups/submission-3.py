class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = {}
        for s in strs:
            x = tuple(sorted(s))
            if x not in mp:
                mp[x] = []
            mp[x].append(s)
        return list(mp.values())       