// LeetCode Problem : 1071. Greatest Common Divisor of Strings
// Link : https://leetcode.com/problems/greatest-common-divisor-of-strings/description/

class Solution {
public:
    int gcd(int m, int n){
        while(n!=0){
            int rem = m%n;
            m = n;
            n = rem;
        }
        return m;
    }
    string gcdOfStrings(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
        int ans = gcd(m,n);
        

        if(str1+str2 != str2+str1){
            return "";
        }

        return str1.substr(0,ans);
    }
};
