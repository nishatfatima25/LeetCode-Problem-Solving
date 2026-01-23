// LeetCode Problem : 405. Convert a Number to Hexadecimal
// Link : https://leetcode.com/problems/convert-a-number-to-hexadecimal/description/

class Solution {
public:
    string toHex(int num) {

        if(num == 0) return "0";
        unsigned int n = num;

        string hexa = "0123456789abcdef";
        string ans;

        while(n!= 0){
           ans += hexa[n%16];
           n /= 16;
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
