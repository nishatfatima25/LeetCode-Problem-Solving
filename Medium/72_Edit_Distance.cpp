// LeetCode Problem : 72. Edit Distance
// Link : https://leetcode.com/problems/edit-distance/description/

class Solution {
public:

    int solve(int m, int n, string &s1, string &s2, vector<vector<int>> &dp){
        if(m==0) return n;
        if(n==0) return m;
        if(dp[m][n] != -1) return dp[m][n];

        if(s1[m-1] == s2[n-1]) return dp[m][n] = solve(m-1,n-1,s1,s2,dp);
        else{
            int insertion = 1 + solve(m,n-1,s1,s2,dp);
            int deletion = 1 + solve(m-1,n,s1,s2,dp);
            int replace = 1 + solve(m-1,n-1,s1,s2,dp);
            return dp[m][n] = min({insertion,deletion,replace});
        }

    }

    int minDistance(string s1, string s2) {
        int m = s1.size();
        int n = s2.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,s1,s2,dp);
    }
};
