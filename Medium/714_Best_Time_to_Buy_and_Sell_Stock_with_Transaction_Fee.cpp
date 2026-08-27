// LeetCode Problem : 714. Best Time to Buy and Sell Stock with Transaction Fee
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-transaction-fee/

class Solution {
public:

    int solve(int idx, bool buy, vector<int> &prices, vector<vector<int>> &dp, int fee){
        if(idx == prices.size()) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];

        int profit = 0;
        if(buy){
            int take = -prices[idx] + solve(idx+1,false,prices,dp,fee);
            int notTake = solve(idx+1,true,prices,dp,fee);
            profit = max(take,notTake);
        }
        else{
            int sell = prices[idx]-fee + solve(idx+1,true,prices,dp,fee);
            int notSell = solve(idx+1,false,prices,dp,fee);
            profit = max(sell,notSell);
        }

        return dp[idx][buy] = profit;
    }

    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,true,prices,dp,fee);
    }
};
