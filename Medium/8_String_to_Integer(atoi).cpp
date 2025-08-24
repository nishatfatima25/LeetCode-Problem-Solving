// LeetCode Problem : 8. String to Integer(atoi)
// Link : https://leetcode.com/problems/string-to-integer-atoi/description/

class Solution {
public:
    int myAtoi(string s) {
        int i = 0 , n = s.size();
        long num = 0;
        int sign = 1;

        while(i<n && s[i] == ' ') i++; //for leading spaces
        
        //for sign
        if(i<n &&(s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '-') ? -1: 1;
            i++;
        }

        while(i<n && isdigit(s[i])){
            int digit = s[i] - '0';

            if(num > INT_MAX/10 || (num== INT_MAX/10 && digit > 7)){
                return (sign==1) ? INT_MAX : INT_MIN;
            }

            num = num*10 + digit;
            i++;
        }

        int ans = (int)(num*sign);
        return ans;
    }
};
