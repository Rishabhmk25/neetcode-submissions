class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> f;
        int ans = 0;
        int l = 0, mx = 0;
        for(int r = 0; r < s.size(); r++) {
            f[s[r]]++;
            mx = max(mx, f[s[r]]);
            while((r-l+1)-mx > k) {
                f[s[l]]--;
                l++;
            }
            ans = max(ans, r-l+1);
        }        
        return ans;
    }
};
