// LeetCode Problem : 70. Climbing Stairs
// Link : https://leetcode.com/problems/climbing-stairs/description/

class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return n;
        }
        int one = 1;
        int two = 2;
        for(int i=3; i<=n; i++){
            int temp = one+two;
            one = two;
            two = temp;
        }
        return two;
    }
};
