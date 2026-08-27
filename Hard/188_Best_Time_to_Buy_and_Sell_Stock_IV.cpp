// LeetCode Problem : 188. Best Time to Buy and Sell Stock IV
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/description/

class Solution {
public:

    int solve(int idx, bool buy, int k, vector<int> &prices, vector<vector<vector<int>>> &dp){
        if(k==0) return 0;
        if(idx == prices.size()) return 0;
        if(dp[idx][buy][k] != -1) return dp[idx][buy][k];

        int profit = 0;
        if(buy){
            int take = -prices[idx] + solve(idx+1,false,k,prices,dp);
            int notTake = solve(idx+1,true,k,prices,dp);
            profit = max(take,notTake);
        }
        else{
            int sell = prices[idx] + solve(idx+1,true,k-1,prices,dp);
            int notSell = solve(idx+1,false,k,prices,dp);
            return max(sell,notSell);
        }
        return dp[idx][buy][k] = profit;
    }

    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(0,true,k,prices,dp);
    }
};
