// LeetCode Problem : 3954. Sum of Compatible Numbers in Range I
// Link : https://leetcode.com/problems/sum-of-compatible-numbers-in-range-i/description/

class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        
        int sum = 0;
        for(int i=max(1,n-k); i<= n+k; i++){
            if(abs(n-i) <=k && ((n & i) == 0)) sum += i;
        }

        return sum;
    }
};
