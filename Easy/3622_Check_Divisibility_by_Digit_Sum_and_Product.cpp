// LeetCode Problem : 3622. Check Divisibility by Digit Sum and Product
// Link : https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/description/

class Solution {
public:
    bool checkDivisibility(int n) {
        
        int sum=0;
        int product=1;
        int original = n;

        while(n>0){
            int rem = n%10;

            sum += rem;
            product *= rem;

            n /= 10;
        }

        if(original %(sum+product) == 0) return true;
        
        return false;
    }
};
