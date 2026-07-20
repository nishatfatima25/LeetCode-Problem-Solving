// LeetCode Problem : 50. Pow(x,n)
// Link : https://leetcode.com/problems/powx-n/description/

class Solution {
public:
    double myPow(double x, int n) {
        double ans =1.0;
        long long N = n;
        if(n<0){
            x = 1/x;
            N = -N;
        }
        
        
        while(N>0){
            if(N%2==1){
                ans = ans*x;
            }
            x = x*x;
            N = N/2;
        }
        return ans;
    }
};

// Recursion
class Solution {
public:
    double pwr(double base, long long exp){
        if(exp == 0) return 1.0;
        if(exp == 1) return base;

        if(exp % 2 == 0) return pwr(base*base,exp/2);
        return base * pwr(base,exp-1);
    }
    double myPow(double x, int n) {
        
        long long num = n;

        if(num < 0) return (1.0/pwr(x,-1*num));
        return pwr(x,num);
    }
};
