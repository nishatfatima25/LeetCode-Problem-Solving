// LeetCode Problem : 504. Base 7
// Link : https://leetcode.com/problems/base-7/description/

class Solution {
public:
    string convertToBase7(int num) {
        
        if(num == 0) return "0";
        bool negative = num < 0;
        long long n = num;

        if(negative) n = -n;

        string ans;

        while(n > 0){
            int rem = n % 7;
            n /= 7;
            ans.push_back('0'+rem);
        }

        if(negative) ans.push_back('-');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
