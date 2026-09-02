class Solution:

    def encode(self, strs: List[str]) -> str:
        encode = ""
        for s in strs:
            encode += str(len(s)) + "#" + s
        return encode
    def decode(self, s: str) -> List[str]:
        v = []
        i = 0
        while i < len(s):
            j = i
            while s[j] != '#':
                j += 1
            l = int(s[i:j])
            st = j + 1
            v.append(s[st:st+l])
            i = st + l 
        return v