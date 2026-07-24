class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> q;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] == 0) q.push({0, {i, j}});
            }
        }
        vector<pair<int,int>> d = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        while(!q.empty()) {
            auto [dis, p] = q.top();
            q.pop();
            int x = p.first;
            int y = p.second;
            if(grid[x][y] < dis) continue;
            for(auto& [dx, dy]: d) {
                int i = x + dx;
                int j = y + dy;
                if(min(i, j) >= 0 && i < m && j < n && grid[i][j] != -1) {
                    if(grid[i][j] >= dis+1) {
                        grid[i][j] = dis + 1;
                        q.push({dis+1, {i, j}});
                    }
                }
            }
        }
    }
};
