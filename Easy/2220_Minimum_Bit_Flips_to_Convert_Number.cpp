// LeetCode Problem : 2220. Minimum Bit Flips to Convert Number
// Link : https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num = start ^ goal;

        int count = 0;
        while(num>0){
            if(num & 1) count += 1;
            num = num>>1;
        }
        return count;
    }
};
