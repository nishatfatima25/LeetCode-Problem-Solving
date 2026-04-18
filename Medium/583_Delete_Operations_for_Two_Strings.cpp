// LeetCode Problem : 583. Delete Operation for Two Strings
// Link : https://leetcode.com/problems/delete-operation-for-two-strings/description/

class Solution {
public:
    int lcs(string &word1, string &word2, int n, int m){
        int dp[n+1][m+1];
        for(int i=0; i<n+1; i++){
            for(int j=0; j<m+1; j++){
                if(i==0 || j==0) dp[i][j] = 0;
            }
        }

        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
                if(word1[i-1] == word2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }

        return dp[n][m];
    }

    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        int ans = (n-lcs(word1,word2,n,m)) + (m-lcs(word1,word2,n,m));
        return ans;
    }
};
