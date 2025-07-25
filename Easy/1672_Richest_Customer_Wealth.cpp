// LeetCode Problem : 1672. Richest Customer Wealth
// Link : https://leetcode.com/problems/richest-customer-wealth/description/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int maxSum=0;
        for(int i=0; i<accounts.size(); i++){
            int sum =0;
            for(int j=0; j<accounts[0].size(); j++){
                sum += accounts[i][j];
                
            }
            maxSum = max(maxSum,sum);
        }

        return maxSum;
    }
};
