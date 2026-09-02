class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mp = {}
        l = 0
        ans = 0
        for r in range(len(s)):
            if s[r] not in mp:
                mp[s[r]] = 0
            mp[s[r]] += 1
            while(mp[s[r]] > 1):
                mp[s[l]] -= 1
                l += 1
            ans = max(ans, r-l+1)
        return ans