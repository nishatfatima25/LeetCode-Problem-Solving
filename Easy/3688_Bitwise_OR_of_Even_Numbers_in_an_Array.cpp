// LeetCode Problem : 3688. Bitwise OR of Even Numbers in an Array
// Link : https://leetcode.com/problems/bitwise-or-of-even-numbers-in-an-array/description/

class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        
        int val =0;
        for(int num : nums){
            if(num %2 == 0){
                val = val | num;
            }
        }

        return val;
    }
};
