// LeetCode Problem : 130. Surrounded Regions
// Link : https://leetcode.com/problems/surrounded-regions/description/

class Solution {

private:
    void dfs(int row, int col, vector<vector<int>>& vis,
             vector<vector<char>>& board, int drow[], int dcol[]) {

        vis[row][col] = 1;
        
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < 4; i++) {
            int nrow = row + drow[i];
            int ncol = col + dcol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                !vis[nrow][ncol] && board[nrow][ncol] == 'O') {
                
                dfs(nrow, ncol, vis, board, drow, dcol);
            }
        }
    }

public:
    void solve(vector<vector<char>>& board) {

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        int n = board.size();
        int m = board[0].size();

        vector<vector<int>> vis(n, vector<int>(m, 0));

        // first row and last row
        for (int j = 0; j < m; j++) {
            // 1st row
            if (!vis[0][j] && board[0][j] == 'O') {
                dfs(0, j, vis, board, drow, dcol);
            }

            // last row
            if (!vis[n - 1][j] && board[n - 1][j] == 'O') {
                dfs(n - 1, j, vis, board, drow, dcol);
            }
        }

        // for first and last column
        for (int i = 0; i < n; i++) {
            // 1st col
            if (!vis[i][0] && board[i][0] == 'O') {
                dfs(i, 0, vis, board, drow, dcol);
            }
            // last col
            if (!vis[i][m - 1] && board[i][m - 1] == 'O') {
                dfs(i, m - 1, vis, board, drow, dcol);
            }
        }

        // now convert rest Os to X
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
