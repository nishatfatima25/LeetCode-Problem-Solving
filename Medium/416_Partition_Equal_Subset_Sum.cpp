// LeetCode Problem : 416. Partition Equal Subset Sum
// Link : https://leetcode.com/problems/partition-equal-subset-sum/

class Solution {
public:
    bool subsetSum(vector<int> &nums,int n, int sum){
        int dp[n+1][sum+1];
        for(int i=0; i<n+1; i++){
            for(int j=0; j<sum+1; j++){
                if(i==0 && j==0) dp[i][j] =  true;
                else if(i==0) dp[i][j] = false;
                else if(j==0) dp[i][j] = true;
            }
        }

        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                if(nums[i-1] <= j){
                    int include = dp[i-1][j-nums[i-1]];
                    int exclude = dp[i-1][j];
                    dp[i][j] = include || exclude;
                }
                else dp[i][j] = dp[i-1][j];
            }
        }

        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);

        if(sum%2 != 0) return false;
        else return subsetSum(nums,n,sum/2);
    }
};
