// LeetCode Problem : 2596. Check Knight Tour Configuration
// Link : https://leetcode.com/problems/check-knight-tour-configuration/description/

class Solution {
public:

    bool solve(vector<vector<int>> &grid, int r, int c, int n, int expVal){
        if(r<0 || c<0 || r>=n || c>=n || grid[r][c] != expVal) return false;
        if(expVal == n*n-1) return true;

        bool ans1 = solve(grid,r-2,c+1,n,expVal+1);
        bool ans2 = solve(grid,r-1,c+2,n,expVal+1);
        bool ans3 = solve(grid,r+1,c+2,n,expVal+1);
        bool ans4 = solve(grid,r+2,c+1,n,expVal+1);
        bool ans5 = solve(grid,r+2,c-1,n,expVal+1);
        bool ans6 = solve(grid,r+1,c-2,n,expVal+1);
        bool ans7 = solve(grid,r-1,c-2,n,expVal+1);
        bool ans8 = solve(grid,r-2,c-1,n,expVal+1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        return solve(grid,0,0,n,0);        
    }
};
