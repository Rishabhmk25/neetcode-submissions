class Solution {
public:
    string foreignDictionary(vector<string>& words) {
        unordered_map<char, unordered_set<char>> adj;
        unordered_map<char, int> indegree;
        for(string w: words) {
            for(char c: w) {
                adj[c] = unordered_set<char>();
                indegree[c] = 0;
            }
        }
        for(int i = 0; i < words.size()-1; i++) {
            string w1 = words[i], w2 = words[i+1];
            int ml = min(w1.size(), w2.size());
            if(w1.size() > w2.size() && w1.substr(0, ml) == w2.substr(0, ml)) return "";
            for(int j = 0; j < ml; j++) {
                if(w1[j] != w2[j]) {
                    if(!adj[w1[j]].count(w2[j])) {
                        adj[w1[j]].insert(w2[j]);
                        indegree[w2[j]]++;
                    }
                    break;
                }
            }
        }
        queue<char> q;
        for(auto& [c, deg]: indegree) {
            if(deg == 0) q.push(c);
        }
        string res;
        while(!q.empty()) {
            char c = q.front();
            q.pop();
            res += c;
            for(char ne: adj[c]) {
                indegree[ne]--;
                if(indegree[ne] == 0) q.push(ne);
            }
        }
        if(res.size() == indegree.size()) return res;
        return "";
    }
};
