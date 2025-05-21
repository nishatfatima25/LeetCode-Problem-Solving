// LeetCode Problem : 121. Best Time to Buy and Sell Stock
// Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int maxi =0;
        int gain=0;

        for(int i=0; i<n; i++){
            if(prices[i]< mini){
                mini = prices[i];
            }
            gain = prices[i] - mini;
            if(gain> maxi){
                maxi = gain;
            }
        }
        return maxi;
    }
};
