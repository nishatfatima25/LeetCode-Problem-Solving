// LeetCode Problem : 1009. Complement of Base 10 Integer
// Link : https://leetcode.com/problems/complement-of-base-10-integer/description/

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;

        int mask = 0;
        int temp = n;

        while(temp > 0){
            mask = (mask<<1) | 1;
            temp >>= 1;
        }
        return n ^ mask;
    }
};
