// LeetCode Problem : 329. Longest Increasing Path in a Matrix
// Link : https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/

class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> indegree(m,vector<int>(n,0));

        for(int i =0; i<m; i++){
            for(int j=0; j<n; j++){

                if(i-1>=0 && arr[i-1][j] > arr[i][j]) indegree[i-1][j]++;
                if(j+1 <n && arr[i][j+1] > arr[i][j]) indegree[i][j+1]++;
                if(i+1 <m && arr[i+1][j] > arr[i][j]) indegree[i+1][j]++;
                if(j-1>=0 && arr[i][j-1] > arr[i][j]) indegree[i][j-1]++;
            }
        }

        queue<pair<int,int>> q;
        int ans = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(indegree[i][j] == 0) q.push({i,j});
            }
        }

        while(!q.empty()){
            int size = q.size();
            ans++;

            while(size--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                if(i-1>=0 && arr[i-1][j] > arr[i][j]){
                    indegree[i-1][j]--;
                    if(indegree[i-1][j] == 0) q.push({i-1,j});
                }

                if(j+1 <n && arr[i][j+1] > arr[i][j]){
                    indegree[i][j+1]--;
                    if(indegree[i][j+1] == 0) q.push({i,j+1});
                }

                if(i+1 <m && arr[i+1][j] > arr[i][j]){
                    indegree[i+1][j]--;
                    if(indegree[i+1][j] == 0) q.push({i+1,j});
                }

                if(j-1 >=0 && arr[i][j-1] > arr[i][j]){
                    indegree[i][j-1]--;
                    if(indegree[i][j-1] == 0) q.push({i,j-1});
                }
            }
        }

        return ans;
    }
};
