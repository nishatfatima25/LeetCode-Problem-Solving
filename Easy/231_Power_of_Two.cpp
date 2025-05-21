// LeetCode Problem : 231. Power of Two
// Link : https://leetcode.com/problems/power-of-two/description/

class Solution {
public:
    bool isPowerOfTwo(int n) {
       if(n<0){
        return false;
       }
       else{
        if(!(n & n-1) && n){
            return true;
        }
        return false;
       }
    }
};
