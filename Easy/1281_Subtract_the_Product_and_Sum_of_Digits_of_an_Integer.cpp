// LeetCode Problem : 1281. Subtract the Product and Sum of Digits of an Integer
// Link : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/description/

class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int sum=0;
        int prod=1;

        while(n>0){
            int rem = n%10;

            prod *= rem;
            sum += rem;

            n /= 10;
        }

        return (prod-sum);
    }
};
