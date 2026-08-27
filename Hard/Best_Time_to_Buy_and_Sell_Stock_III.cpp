// LeetCode Problem : 123. Best Time to Buy and Sell Stock III
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/description/

class Solution {
public:

    int solve(int idx, bool buy, int cap, vector<int> &prices, vector<vector<vector<int>>> &dp){
        if(cap == 0) return 0;
        if(idx == prices.size()) return 0;
        if(dp[idx][buy][cap] != -1) return dp[idx][buy][cap];

        int profit = 0;
        if(buy){
            int take = -prices[idx] + solve(idx+1,false,cap,prices,dp);
            int notTake = solve(idx+1,true,cap,prices,dp);
            profit = max(take,notTake);
        }
        else{
            int sell = prices[idx] + solve(idx+1,true,cap-1,prices,dp);
            int notSell = solve(idx+1,false,cap,prices,dp);
            profit = max(sell,notSell);
        }
        return dp[idx][buy][cap] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(0,true,2,prices,dp);
    }
};
