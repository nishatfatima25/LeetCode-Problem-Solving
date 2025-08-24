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
