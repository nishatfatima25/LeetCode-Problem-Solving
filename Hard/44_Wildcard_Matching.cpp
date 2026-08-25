// LeetCode Problem : 44. Wildcard Matching
// Link : https://leetcode.com/problems/wildcard-matching/description/

class Solution {
public:

    int solve(int m, int n, string &s, string &p, vector<vector<int>> &dp){
        if(m==0 && n==0) return true;
        if(n==0) return false;
        if(m==0){
            for(int i=0; i<n; i++){
                if(p[i] != '*') return false;
            }
            return true;
        }

        if(dp[m][n] != -1) return dp[m][n];

        if(p[n-1] == '*') return dp[m][n] = solve(m,n-1,s,p,dp) || solve(m-1,n,s,p,dp);
        else if(s[m-1] == p[n-1] || p[n-1] == '?') return dp[m][n] = solve(m-1,n-1,s,p,dp);
        else return dp[m][n] = false;
    }

    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return solve(m,n,s,p,dp);
    }
};
