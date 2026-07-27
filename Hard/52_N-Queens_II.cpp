// LeetCode Problem : 52. N-Queens II
// Link : https://leetcode.com/problems/n-queens-ii/description/

class Solution {
public:

    bool isSafe(vector<string> &board, int row, int col, int n){
        //horizontal
        for(int j=0; j<n; j++){
            if(board[row][j] == 'Q') return false;
        }

        //vertical
        for(int i=0; i<n; i++){
            if(board[i][col] == 'Q') return false;
        }

        //left diag
        for(int i=row, j = col; i>=0 && j>=0; i--,j--){
            if(board[i][j] == 'Q') return false;
        }

        //right diag
        for(int i=row,j=col; i>=0 && j<n; i--,j++){
            if(board[i][j] == 'Q') return false;
        }

        return true;
    }

    int solve(vector<string> &board, int row, int n){
        if(row == n) return 1;

        int ans = 0;
        for(int j=0; j<n; j++){
            if(isSafe(board,row,j,n)){
                board[row][j] = 'Q';
                ans += solve(board,row+1,n);
                board[row][j] = '.';
            }
        }
        return ans;
    }

    int totalNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        return solve(board,0,n);
    }
};
