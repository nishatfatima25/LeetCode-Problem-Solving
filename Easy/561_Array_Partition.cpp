// LeetCode Problem : 561. Array Partition
// Link : https://leetcode.com/problems/array-partition/description/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int sum = 0;

        for(int i=0; i<nums.size(); i=i+2){
            sum += nums[i];
        }

        return sum;
    }
};
