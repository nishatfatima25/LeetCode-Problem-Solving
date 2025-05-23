// LeetCode Problem : 802. Find Eventual Safe States
// Link : https://leetcode.com/problems/find-eventual-safe-states/description/

//solution 1
class Solution {
public:

    int dfs_rec(int i, vector<vector<int>>& graph, vector<int> &status, vector<int> &InRec){
        status[i] = 1;
        InRec[i] = 1;

        for(int j=0; j<graph[i].size(); j++){
            int el = graph[i][j];
            if(status[el] == 0){
                int val = dfs_rec(el,graph,status,InRec);
                if(val ==1){
                    return 1;
                }
            }
            else{
                if(InRec[el] == 1){
                    return 1;
                }
            }
        }

        InRec[i] = 0;
        return 0;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        int ans=0;
        vector<int> cycle(v,0);
        vector<int> InRec(v,0);
        
        
        for(int i=0; i<v; i++){
                vector<int> status(v,0);
            
                ans = dfs_rec(i,graph,status,InRec);
                if(ans == 1){
                    cycle[i] = 1;
                }    
        }

        vector<int>safeStates;
        for(int i=0; i<v; i++){
            if(cycle[i] == 0){
                safeStates.push_back(i);
            }
        }

        return safeStates;
    }
};



//solution 2
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        unordered_set<int> se;
        for(int i=0;i<graph.size();i++){
            if(graph[i].size()==0) se.insert(i);
        }
        while(true){
            int x = se.size();
            for(int i=0;i<graph.size();i++){
                bool ins = true;
                for(auto el:graph[i]){
                    if(se.find(el)==se.end()){
                        ins = false;
                        break;
                    }
                }
                if(ins) se.insert(i);
            }
            if(se.size()==x) break;
        }

        vector<int> ans(se.begin(), se.end());
        sort(ans.begin(), ans.end());
        return ans;
    }
};
