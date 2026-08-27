// LeetCode Problem : 309. Best Time to Buy and Sell Stock with Cooldown
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/

class Solution {
public:

    int solve(int idx, bool buy, vector<int> &prices, vector<vector<int>> &dp){
        if(idx >= prices.size()) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];

        int profit = 0;

        if(buy){
            int take = -prices[idx] + solve(idx+1,false,prices,dp);
            int notTake = solve(idx+1,true,prices,dp);
            profit = max(take,notTake);
        }
        else{
            int sell = prices[idx] + solve(idx+2,true,prices,dp);
            int notSell = solve(idx+1,false,prices,dp);
            profit = max(sell,notSell);
        }

        return dp[idx][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,true,prices,dp);
    }
};
