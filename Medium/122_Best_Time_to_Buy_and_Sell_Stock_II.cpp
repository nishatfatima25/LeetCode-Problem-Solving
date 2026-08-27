// LeetCode Problem : 122. Best Time to Buy and Sell Stock II
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/

class Solution {
public:

    int solve(int idx, bool buy, vector<int> &prices, vector<vector<int>> &dp){
        if(idx == prices.size()) return 0;
        if(dp[idx][buy] != -1) return dp[idx][buy];

        int profit = 0;

        if(buy) profit = max(-prices[idx] + solve(idx+1,false,prices,dp) , solve(idx+1,true,prices,dp));
        else profit = max(prices[idx] + solve(idx+1,true,prices,dp) , solve(idx+1,false,prices,dp));

        return dp[idx][buy] = profit;
    }

    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return solve(0,true,prices,dp);
    }
};
