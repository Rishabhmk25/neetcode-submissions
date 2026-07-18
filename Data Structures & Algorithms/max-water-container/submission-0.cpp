class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n-1;
        int ans = 0;
        while(l < r) {
            int m = min(heights[l], heights[r]);
            int w = r-l;
            ans = max(ans, m*w);
            if(heights[l] > heights[r]) r--;
            else l++;
        }
        return ans;
    }
};
