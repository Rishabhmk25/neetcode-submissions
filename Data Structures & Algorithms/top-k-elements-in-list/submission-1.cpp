class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> f;
        for(int x: nums) f[x]++;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> p;
        for(auto& q: f) {
            p.push({q.second, q.first});
            if(p.size() > k) p.pop();
        }
        vector<int> ans;
        while(!p.empty()) {
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
    }
};
