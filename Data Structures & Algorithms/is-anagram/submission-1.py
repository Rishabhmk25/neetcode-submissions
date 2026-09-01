class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        f = [0]*26
        n = len(s)
        if n != len(t):
            return False
        for i in range(n):
            f[ord(s[i])-ord('a')] += 1
            f[ord(t[i])-ord('a')] -= 1
        for i in range(26):
            if f[i] != 0:
                return False
        return True