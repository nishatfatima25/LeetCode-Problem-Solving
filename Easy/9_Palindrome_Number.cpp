// LeetCode Problem: 9. Palindrome Number
// Link: https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        int a;
        long rev;
        int org = x;
        if(x<0){
            return false;
        }
        while(x!=0){
          a = x%10;
          rev = rev*10 + a;
           x = x/10;
        }
        if(rev == org){
            return true;
        }
        else{
            return false;
        }
    }
};
