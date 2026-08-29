// LeetCode Problem : 300. Longest Increasing Subsequence
// Link : https://leetcode.com/problems/longest-increasing-subsequence/description/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;

        for(int x : nums){
            auto it = lower_bound(temp.begin(),temp.end(),x);
            if(it == temp.end()) temp.push_back(x);
            else *it = x;
        }

        return temp.size();

    }
};

// Method - 2

class Solution {
public:
    int solve(int idx, int prev, vector<int> &nums, vector<vector<int>> &dp){
        int n = nums.size();
        if(idx == n) return 0;
        if(dp[idx][prev+1] != -1) return dp[idx][prev+1];

        int take = 0;
        int notTake = solve(idx+1,prev,nums,dp);
        if(prev == -1 || nums[idx] > nums[prev]) take = 1 + solve(idx+1,idx,nums,dp);
        
        return dp[idx][prev+1] = max(take,notTake);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return  solve(0,-1,nums,dp);
    }
};
