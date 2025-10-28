// LeetCode Problem : 207. Course Schedule
// Link : https://leetcode.com/problems/course-schedule/description/

class Solution {

private:
    bool dfs(int node,vector<int> &vis,vector<int> adj[],vector<int> &pathVis,vector<int> &ans)
    {
        vis[node] = 1;
        pathVis[node] = 1;

        for(auto it : adj[node]){
            if(!vis[it]){
                if(dfs(it,vis,adj,pathVis,ans)) return true;
            }
            else if(pathVis[it]) return true;
        }

        pathVis[node] = 0;
        return false;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int V = numCourses;
        vector<int> adj[V];
        for(auto &e : prerequisites){
            int u = e[1];
            int v = e[0];

            adj[u].push_back(v);
        }

        vector<int> vis(V,0);
        vector<int> pathVis(V,0);
        vector<int> ans;

        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(dfs(i,vis,adj,pathVis,ans)) return false;
            }
        }

        return true;
    }
};
