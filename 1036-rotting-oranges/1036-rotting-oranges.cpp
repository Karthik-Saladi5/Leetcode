class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> time(n, vector<int>(m, -1));
        queue<pair<int, int>> q;
        int c = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                    time[i][j] = 0;
                } else if (grid[i][j] == 1)
                    c++;
            }
        }
        if (c == 0)
            return 0;
        vector<vector<int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        int mx = 0;
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();
            for (auto d : dir) {
                int xi = i + d[0], yj = d[1] + j;
                if (xi >= 0 && xi < n && yj >= 0 && yj < m &&
                    grid[xi][yj] == 1) {
                    grid[xi][yj] = 2;
                    q.push({xi, yj});
                    time[xi][yj] = time[i][j] + 1;
                    mx = max(mx, time[xi][yj]);
                    c--;
                }
            }
        }
        return c ? -1 : mx;
    }
};