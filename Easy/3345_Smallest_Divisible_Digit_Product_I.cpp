// LeetCode Problem : 3345. Smallest Divisible Digit Product I
// Link : https://leetcode.com/problems/smallest-divisible-digit-product-i/description/

class Solution {
public:

    int product(int num){
        int ans = 1;
        while(num > 0){
            int rem = num % 10;
            ans = ans * rem;
            num = num/10;
        }
        return ans;
    }

    int smallestNumber(int n, int t) {
        
        int ans = -1;
        for(int i=n; i<=100; i++){

            if(product(i) % t == 0){
                ans = i;
                break;
            }
        }

        return ans;
    }
};
