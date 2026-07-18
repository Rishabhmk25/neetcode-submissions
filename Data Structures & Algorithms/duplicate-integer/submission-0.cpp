class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> f;
        for(int x: nums) {
            if(f[x] == 1) return true;
            f[x]++;
        }
        return false;
    }
};