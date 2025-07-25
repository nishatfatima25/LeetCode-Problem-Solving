// LeetCode Problem : 1480. Running Sum of 1-d Array
// Link : https://leetcode.com/problems/running-sum-of-1d-array/description/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        for(int i=1; i<nums.size(); i++){
            nums[i] += nums[i-1];
        }

        return nums;
    }
};
