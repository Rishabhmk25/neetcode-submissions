class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n-1;
        int sum = accumulate(height.begin(), height.end(), 0);
        int t = 0;
        int prev = 0;
        while(l <= r) {
            int m = min(height[l], height[r]);
            int w = r-l+1;
            t += w*max(m-prev, 0);
            if(height[l] < height[r]) l++;
            else r--;
            prev = max(m, prev);
        }
        return t-sum;
    }
};
