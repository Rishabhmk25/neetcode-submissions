class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> f;
        for(string s: strs) {
            string t = s;
            sort(t.begin(), t.end());
            f[t].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto a: f) {
            ans.push_back(a.second);
        }
        return ans;
    }
};
