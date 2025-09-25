// LeetCode Problem : 3674. Minimum Operations to Equalise Array
// Link : https://leetcode.com/problems/minimum-operations-to-equalize-array/description/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        for(int i=1;i<nums.size(); i++){
            if(nums[i] != nums[0]) return 1;
        }

        return 0;
    }
};
