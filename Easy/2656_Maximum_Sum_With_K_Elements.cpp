// LeetCode Problem : 2656. Maximum Sum With Exactly K Elements
// Link : https://leetcode.com/problems/maximum-sum-with-exactly-k-elements/description/

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int n = nums.size()-1;
        
        while(k--){
            ans += nums[n];
            nums[n] = nums[n]+1;
        }
        return ans;
    }
};
