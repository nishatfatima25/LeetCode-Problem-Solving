// LeetCode Problem : 2016. Maximum Difference Between Increasing Elements
// Link : https://leetcode.com/problems/maximum-difference-between-increasing-elements/description/

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int result = -1;
        int minimum = nums[0];

        for(int i=0; i<nums.size(); i++){
            minimum = min(minimum, nums[i]);
            if(nums[i]>minimum){
                result = max(result, nums[i] - minimum);
            }
        }

        return result;
    }
};
