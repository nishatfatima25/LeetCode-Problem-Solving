// LeetCode Problem : 2243. Calculate Digit Sum of a String
// Link : https://leetcode.com/problems/calculate-digit-sum-of-a-string/description/

class Solution {
public:
    string digitSum(string s, int k) {
 
        while(s.size()>k){
            string str;
            int n = s.size();
            for(int i=0; i<n; i += k){
                int val = 0;
                for(int j=i; j<min(i+k,n); j++) val += s[j] -'0';
                str.append(to_string(val));
            }
            s = str;
        }

        return s;
    }
};
