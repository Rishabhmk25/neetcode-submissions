class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        int s = 0;
        int i = 0, c = nums[0];
        while(i < nums.size()) {
            if(c != nums[i]) {
                c = nums[i];
                s = 0;
            }
            while(i < nums.size() && nums[i] == c) i++;
            s++;
            c++;
            ans = max(ans, s);
        }
        return ans;
    }
};
