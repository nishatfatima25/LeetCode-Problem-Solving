// LeetCode Problem : 494. Target Sum
// Link : https://leetcode.com/problems/target-sum/description/

class Solution {
public:
    int countSubsetSum(vector<int> &nums, int sum){
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1,0));
        dp[0][0] = 1;

        for(int i=1; i<n+1; i++){
            for(int j=0; j<sum+1; j++){
                if(nums[i-1] <= j){
                    int include = dp[i-1][j-nums[i-1]];
                    int exclude = dp[i-1][j];
                    dp[i][j] = include+exclude;
                }
                else dp[i][j] = dp[i-1][j];
            }
        }

        return dp[n][sum];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalSum = accumulate(nums.begin(),nums.end(),0);
        if(abs(target) > totalSum) return 0;
        if((target + totalSum) < 0) return 0;  
        if((target + totalSum) % 2 != 0) return 0;

        int sum = (target+totalSum)/2;
        return countSubsetSum(nums,sum);
    }
};
