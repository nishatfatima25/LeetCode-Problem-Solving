// LeetCode Problem : 547. Number of Provinces
// Link : https://leetcode.com/problems/number-of-provinces/description/

class Solution {

private:
    void dfs(int node, vector<vector<int>> &adjList, vector<int> &vis){

        vis[node] = 1;
        for(auto it : adjList[node]){
            if(!vis[it]){
                dfs(it,adjList,vis);
            }
        }
    }

public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int V = isConnected.size();

        vector<vector<int>> adjList(V);

        for(int i=0; i<V; i++){
            for(int j=0; j<V ; j++){
                if(isConnected[i][j] == 1 &&  i != j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        vector<int> vis(V,0);
        int count=0;

        for(int i=0; i<V; i++){
            if(!vis[i]){
                count++;
                dfs(i,adjList,vis);
            }
        }

        return count;
    }
};
