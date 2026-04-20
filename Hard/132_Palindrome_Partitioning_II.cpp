// LeetCode Problem : 132. Palindrome Partitioning II
// Link : https://leetcode.com/problems/palindrome-partitioning-ii/description/

class Solution {
public:
    int dp[2001][2001];
    bool isPalindrome(string &s, int i, int j){
        if(i == j) return true;
        if(i > j) return true;

        while(i < j){
            if(s[i] != s[j]) return false;
            i++,j--;
        }
        return true;
    }

    int solve(string &s, int i, int j){
        if(i >= j) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(isPalindrome(s,i,j)) return dp[i][j] = 0;

        int left, right;
        int mini = INT_MAX;
        for(int k=i; k <= j-1; k++){

            if(!isPalindrome(s,i,k)) continue;
            if(dp[i][k] != -1) left = dp[i][k];
            else{
                left = solve(s,i,k);
                dp[i][k] = left;
            }

            if(dp[k+1][j] != -1) right = dp[k+1][j];
            else{
                right = solve(s,k+1,j);
                dp[k+1][j] = right;
            }

            int temp = 1 + left + right;
            mini = min(mini,temp);
        }

        return dp[i][j] = mini;
    }
    int minCut(string s) {
        memset(dp,-1,sizeof(dp));
        int n = s.size();

        return solve(s,0,n-1);
    }
};
