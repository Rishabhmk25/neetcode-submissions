class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        ans = 0
        l = 0
        n = len(s)
        mp = {}
        m = 0
        for r in range(n):
            mp[s[r]] = mp.get(s[r], 0)+1
            m = max(m, mp[s[r]])
            while m < r-l-k+1:
                mp[s[l]] -= 1
                l += 1
            ans = max(ans, r-l+1)
        return ans