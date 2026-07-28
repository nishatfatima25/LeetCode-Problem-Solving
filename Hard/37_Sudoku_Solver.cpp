// LeetCode Problem : 37. Sudoku Solver
// Link : https://leetcode.com/problems/sudoku-solver/description/

class Solution {
public:

    bool isSafe(vector<vector<char>>& board, char dig, int row, int col){

        //horizontal
        for(int j=0; j<9; j++){
            if(board[row][j] == dig) return false;
        }

        //vertical
        for(int i=0; i<9; i++){
            if(board[i][col] == dig) return false;
        }

        //grid
        int sr = (row/3)*3;
        int sc = (col/3)*3;
        for(int i=sr; i<= sr+2; i++){
            for(int j=sc; j<= sc+2; j++){
                if(board[i][j] == dig) return false;
            }
        }

        return true;
    }
    bool solve(vector<vector<char>>& board, int row, int col){

        if(col == 9){   // if reached last col
            row++;
            col = 0;
        }

        if(row == 9) return true;

        if(board[row][col] != '.') return solve(board,row,col+1); // next call if num is already there
            
        //place digit
        for(char dig = '1'; dig <= '9'; dig++){
            if(isSafe(board,dig,row,col)){
                board[row][col] = dig;
                if(solve(board,row,col+1)) return true;
                board[row][col] = '.';
            }
            
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
