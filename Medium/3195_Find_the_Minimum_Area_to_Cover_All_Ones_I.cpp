// LeetCode Problem : 3195. Find the Minimum Area to Cover All Ones I
// Link : https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/description/

class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) { 

        int row = grid.size();
        int col = grid[0].size();

        int minRow = INT_MAX , maxRow = INT_MIN;
        int minCol = INT_MAX , maxCol = INT_MIN;

        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == 1){
                    minRow = min(minRow,i);
                    maxRow = max(maxRow,i);
                    minCol = min(minCol,j);
                    maxCol = max(maxCol,j);
                }
            }
        }

        int ans = (maxRow-minRow+1) * (maxCol-minCol+1);
        return ans;
    }
};
