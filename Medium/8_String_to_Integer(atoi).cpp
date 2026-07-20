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

// By Recursion
class Solution {
public:
    int solve(string &s, int i, long long num, int sign){
        if(i >= s.size() || !isdigit(s[i])) return (int)(sign*num);
        num = num*10 + (s[i]-'0');

        if(sign*num <= INT_MIN) return INT_MIN;
        if(sign*num >= INT_MAX) return INT_MAX;

        return solve(s,i+1,num,sign);

    }
    int myAtoi(string s) {
        int i=0;
        while(i<s.size() && s[i] == ' ') i++;

        int sign = 1;
        if(i<s.size() && (s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        return solve(s,i,0,sign);
    }
};
