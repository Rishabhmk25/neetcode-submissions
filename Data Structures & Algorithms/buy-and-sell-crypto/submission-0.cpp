class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        int b = prices[0];
        int n = prices.size();
        for(int i = 1; i < n; i++) {
            b = min(b, prices[i]);
            p = max(p, prices[i]-b);
        }
        return p;
    }
};
