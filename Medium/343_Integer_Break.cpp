// LeetCode Problem : 343. Integer Break
// Link : https://leetcode.com/problems/integer-break/description/

class Solution {
public:
    int integerBreak(int n) {
        
        if(n<=3) return n-1;

        int ans =1;

        while(n>4){
            ans *= 3;
            n -= 3;
        }

        return ans*n;
    }
};
