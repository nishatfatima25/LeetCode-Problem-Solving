// LeetCode Problem : 3203. Find Minimum Diameter After Merging Two Trees
// Link : https://leetcode.com/problems/find-minimum-diameter-after-merging-two-trees/description/

class Solution {
public:
    pair<int, int> findDiameterAndHeight(vector<vector<int>>& tree, int n) {
       
        auto bfs = [&](int start) -> pair<int, int> {
            vector<int> dist(n, -1);
            queue<int> q;
            q.push(start);
            dist[start] = 0;

            int farthest = start, maxDist = 0;
            while (!q.empty()) {
                int node = q.front(); q.pop();
                for (int neighbor : tree[node]) {
                    if (dist[neighbor] == -1) {
                        dist[neighbor] = dist[node] + 1;
                        q.push(neighbor);
                        if (dist[neighbor] > maxDist) {
                            maxDist = dist[neighbor];
                            farthest = neighbor;
                        }
                    }
                }
            }
            return {farthest, maxDist};
        };
        auto [farthest1, _] = bfs(0);
        auto [farthest2, diameter] = bfs(farthest1);
        int height = (diameter + 1) / 2;
        return {diameter, height};
    }
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int n = edges1.size() + 1; 
        int m = edges2.size() + 1; 
        vector<vector<int>> tree1(n), tree2(m);
        for (auto& edge : edges1) {
            tree1[edge[0]].push_back(edge[1]);
            tree1[edge[1]].push_back(edge[0]);
        }
        for (auto& edge : edges2) {
            tree2[edge[0]].push_back(edge[1]);
            tree2[edge[1]].push_back(edge[0]);
        }
        auto [diameter1, height1] = findDiameterAndHeight(tree1, n);
        auto [diameter2, height2] = findDiameterAndHeight(tree2, m);

        return max({diameter1, diameter2, height1 + height2 + 1});
    }
};
