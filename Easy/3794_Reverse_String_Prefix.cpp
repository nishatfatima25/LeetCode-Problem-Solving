// LeetCode Problem : 3794. Reverse String Prefix
// Link : https://leetcode.com/problems/reverse-string-prefix/description/

class Solution {
public:
    string reversePrefix(string s, int k) {
        
        reverse(s.begin(),s.begin()+k);
        return s;
    }
};
