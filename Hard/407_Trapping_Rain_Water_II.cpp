// LeetCode Problem : 407. Trapping Rain Water II
// Link : https://leetcode.com/problems/trapping-rain-water-ii/description/

class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
       int m = heightMap.size();
        int n = heightMap[0].size();

        if (m < 3 || n < 3) return 0;

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> minHeap;
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 || j == 0 || i == m - 1 || j == n - 1) {
                    minHeap.push({heightMap[i][j], {i, j}});
                    visited[i][j] = true;
                }
            }
        }

        int waterTrapped = 0;
        vector<int> dir = {-1, 0, 1, 0, -1};

        while (!minHeap.empty()) {
            auto [height, cell] = minHeap.top();
            minHeap.pop();
            int x = cell.first, y = cell.second;

            for (int d = 0; d < 4; d++) {
                int nx = x + dir[d], ny = y + dir[d + 1];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    waterTrapped += max(0, height - heightMap[nx][ny]);
                    minHeap.push({max(height, heightMap[nx][ny]), {nx, ny}});
                }
            }
        }

        return waterTrapped;
    }
};
