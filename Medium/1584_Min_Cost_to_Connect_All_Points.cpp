// LeetCode Problem : 1584. Min Cost to Connect All Points
// Link : https://leetcode.com/problems/min-cost-to-connect-all-points/description/

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& edges) {
        int V = edges.size();
        vector<vector<pair<int,int>>> adj(V);
        vector<bool> inMST(V,false);
        
        for(int i=0; i<V; i++){
            for(int j=i+1; j<V; j++){
                int wt = abs(edges[i][0] - edges[j][0]) + abs(edges[i][1] - edges[j][1]);

                adj[i].push_back({j,wt});
                adj[j].push_back({i,wt});
            }
        }
        
        priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        
        int cost = 0;
        while(!pq.empty()){
            int wt = pq.top().first;
            int u = pq.top().second;
            pq.pop();
            
            if(!inMST[u]){
                inMST[u] = true;
                cost += wt;
                
                for(auto &it : adj[u]){
                    int wt = it.second;
                    int v = it.first;
                     pq.push({wt,v});
                }
            }
        }
        
        return cost;
    }
};
