// LeetCode Problem : 1368. Minimum Cost to Make at Least One Valid Path in a Grid
// Link : https://leetcode.com/problems/minimum-cost-to-make-at-least-one-valid-path-in-a-grid/

class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        vector<vector<int>> cost(m, vector<int>(n, INT_MAX));

        pq.push({0, {0, 0}});
        cost[0][0] = 0;

        while (!pq.empty()) {
            auto [currCost, cell] = pq.top();
            pq.pop();
            int x = cell.first, y = cell.second;

            if (x == m - 1 && y == n - 1) {
                return currCost;
            }

            for (int dir = 0; dir < 4; ++dir) {
                int nx = x + directions[dir][0];
                int ny = y + directions[dir][1];

                if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
                    int newCost = currCost + (grid[x][y] == dir + 1 ? 0 : 1);

                    if (newCost < cost[nx][ny]) {
                        cost[nx][ny] = newCost;
                        pq.push({newCost, {nx, ny}});
                    }
                }
            }
        }

        return -1;
    }
};
