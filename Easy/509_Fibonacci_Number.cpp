// LeetCode Problem : 509. Fibonacci Number 
// Link : https://leetcode.com/problems/fibonacci-number/description/

class Solution {
public:
    int fib(int n) {
        if(n<=1){
            return n;
        }
        else{
            return fib(n-1) + fib(n-2);
        }
    }
};
