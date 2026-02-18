// LeetCode Problem : 693. Binary Number with Alternating Bits
// Link : https://leetcode.com/problems/binary-number-with-alternating-bits/description/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        unsigned int bt = n ^ (n>>1);
        return (bt & (bt+1)) == 0;

    }
};
