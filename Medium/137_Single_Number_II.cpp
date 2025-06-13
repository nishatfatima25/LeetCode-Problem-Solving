// LeetCode Problem : 137. Single Number II
// Link : https://leetcode.com/problems/single-number-ii/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i=1; i<nums.size(); i = i+3){
            if(nums[i-1] != nums[i]){
                return nums[i-1];
            }
        }

        return nums[nums.size()-1];
    }
};
