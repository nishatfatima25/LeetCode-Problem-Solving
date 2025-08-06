// LeetCode Problem : 260. Single Number III
// Link : https://leetcode.com/problems/single-number-iii/description/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int xorValue =0;

        for(int i=0; i<nums.size(); i++){
            xorValue ^= nums[i];
        }

        unsigned int differentiatingBit = (unsigned int) xorValue & (-(unsigned int)
        xorValue);

        int x=0;
        int y=0;

        for(int i=0; i<nums.size();i++){
            if((nums[i] & differentiatingBit) == 0){
                x ^= nums[i];
            }
            else{
                y ^= nums[i];
            }
        }

        return {x,y};
    }
};
