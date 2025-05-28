// LeetCode Link : 1800. Maximum Ascending Subarray Sum
// Link : https://leetcode.com/problems/maximum-ascending-subarray-sum/description/

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum =0;
        int current = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                current = current+ nums[i];
            }
            else{
                sum = max(sum, current);
                current = nums[i];
            }
        }
        return max(sum,current);
    }
};
