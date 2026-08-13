class DSU {
public:
    vector<int> p;
    DSU(int n) {
        p.resize(n);
        for(int i = 0; i < n; i++) p[i] = i;
    }
    int f(int n) {
        if(p[n] == n) return n;
        return p[n] = f(p[n]);
    }
    void u(int a, int b) {
        a = f(a);
        b = f(b);
        if(a == b) return;
        p[a] = b;
    }
};
class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        DSU d(n);
        for(auto& e: edges) {
            d.u(e[0], e[1]);
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(d.p[i] == i) ans++;
        }
        return ans;
    }
};
