// LeetCode Problem : 322. Coin Change
// Link : https://leetcode.com/problems/coin-change/description/

// Tabulation
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        long long dp[n+1][amount+1];

        for(int i=0; i<n+1; i++){
            for(int j=0; j<amount+1; j++){
                if(i==0) dp[i][j] = INT_MAX-1;
                else if(j==0) dp[i][j] = 0;
            }
        }

        for(int i=1; i<n+1; i++){
            for(int j=1; j<amount+1; j++){
                if(coins[i-1] <= j){
                    dp[i][j] = min(1+dp[i][j-coins[i-1]] , dp[i-1][j]);
                }
                else dp[i][j] = dp[i-1][j];
            }
        }
        if(dp[n][amount] >= INT_MAX-1) return -1;
        return dp[n][amount];
    }
};

// Memoisation
class Solution {
public:
    long long dp[13][100001];

    int func(vector<int>& coins, int amount, int n){
        if(amount == 0) return 0;
        if(n == 0) return INT_MAX-1;

        if(dp[n][amount] != -1) return dp[n][amount];

        if(coins[n-1] <= amount){
            int include = func(coins,amount-coins[n-1],n);
            int exclude = func(coins,amount,n-1);

            return dp[n][amount] = min(1+include,exclude);
        }
        else return dp[n][amount] = func(coins,amount,n-1);
    }

    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int n = coins.size();
        int ans = func(coins,amount,n);

        return (ans >= INT_MAX - 1) ? -1 : ans;
    }
};
