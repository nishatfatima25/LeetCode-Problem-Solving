// LeetCode Problem : 3650. Minimum Cost Path with Edge Reversals
// Link : https://leetcode.com/problems/minimum-cost-path-with-edge-reversals/description/

class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {

        vector<vector<pair<int, int>>> adj(n);

        for (auto& e : edges) {
            int u = e[0], v = e[1], w = e[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, 2 * w});
        }
        vector<long long> dist(n, LLONG_MAX);
        priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                       greater<pair<long long, int>>>
            pq;

        dist[0] = 0;
        pq.push({0, 0});

        while (!pq.empty()) {
            long long cost = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (cost > dist[node])
                continue;

            for (auto& it : adj[node]) {
                int nextNode = it.first;
                int edgecost = it.second;

                if (dist[nextNode] > cost + edgecost) {
                    dist[nextNode] = cost + edgecost;
                    pq.push({dist[nextNode], nextNode});
                }
            }
        }

        return dist[n - 1] == LLONG_MAX ? -1 : dist[n - 1];
    }
};
