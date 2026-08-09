class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0, r = n-1;
        while(l < r) {
            int d = numbers[l]+numbers[r];
            if(d > target) r--;
            else if(d < target) l++;
            else return {l+1, r+1};
        }
        return {-1, -1};
    }
};
