// LeetCode Problem : 36. Valid Sudoku
// Link : https://leetcode.com/problems/valid-sudoku/description/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> box[9];

        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(board[row][col] == '.') continue;

                char val = board[row][col];
                int boxIdx = (row/3)*3 + (col/3);

                if(rows[row].count(val) || cols[col].count(val) || box[boxIdx].count(val)){
                    return false;
                }
                rows[row].insert(val);
                cols[col].insert(val);
                box[boxIdx].insert(val);
            }
        }

        return true;
    }
};
