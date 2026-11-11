// LeetCode Problem : 29. Divide Two Integers
// Link : https://leetcode.com/problems/divide-two-integers/description/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;

        bool sign = true;

        if(dividend >= 0 && divisor < 0) sign = false;
        else if(dividend < 0 && divisor > 0) sign = false;

        long long nr = abs((long long)dividend);
        long long dr = abs((long long)divisor);
        long long quo = 0;

        while(nr >= dr) {
            int count = 0;

            while(nr >= (dr << (count + 1))) {
                count++;
            }

            quo += (1LL << count);
            nr -= (dr << count);
        }

        if(quo == (1LL << 31) && sign) return INT_MAX;
        if(quo == (1LL << 31) && !sign) return INT_MIN;

        return sign ? quo : -quo;
    }
};
