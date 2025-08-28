// LeetCode Problem : 3446. Sort Matrix by Diagonals
// Link : https://leetcode.com/problems/sort-matrix-by-diagonals/description/

class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        unordered_map<int,vector<int>> mpp;

        //i-j will group elements of same diag
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                mpp[i-j].push_back(grid[i][j]);
            }
        }

        for(auto &it : mpp){
            if(it.first < 0){
                sort(it.second.begin(), it.second.end());  // sort in asc order
            }
            else{
                sort(it.second.begin(), it.second.end(),greater<int>()); // sort in desc order
            }
        }

        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                int idx = i-j;
                grid[i][j] = mpp[idx].back(); //take last element from that row
                mpp[idx].pop_back(); ///now,remove that val from the vector
            }
        }

        return grid;
    }
};
