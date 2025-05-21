// LeetCode Problem : 136. Single Number
// Link : https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorEl =0;
        for(int i=0; i<nums.size(); i++){
            xorEl = xorEl ^ nums[i];
        }
        return xorEl;
    }
};
