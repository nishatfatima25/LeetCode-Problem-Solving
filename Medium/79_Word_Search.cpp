// LeetCode Problem : 79. Word Search
// Link : https://leetcode.com/problems/word-search/description/

class Solution {
public:

    bool solve(vector<vector<char>>& board, string word, int idx, int i, int j){
        int m = board.size();
        int n = board[0].size();

        if(idx == word.size()) return true;
        if(i < 0 || j<0 || i >= m || j >= n || board[i][j] != word[idx]
            || board[i][j] == '$') return false;
        
        char temp = board[i][j];  // store the curr val
        board[i][j] = '$';

        bool up = solve(board,word,idx+1,i-1,j);
        bool down = solve(board,word,idx+1,i+1,j);
        bool right = solve(board,word,idx+1,i,j+1);
        bool left = solve(board,word,idx+1,i,j-1);

        bool found = (up || down || right || left);

        //backtrack to restore the char
        board[i][j] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(solve(board,word,0,i,j)) return true;
            }
        }

        return false;
    }
};
