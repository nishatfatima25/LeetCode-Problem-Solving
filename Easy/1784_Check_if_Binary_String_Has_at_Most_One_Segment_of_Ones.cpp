// LeetCode Problem : 1784. Check if Binary String Has at Most One Segment of Ones
// Link : https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/description/

class Solution {
public:
    bool checkOnesSegment(string s) {
        int l= 0, r = s.size()-1;

        while(s[l] == '1') l++;
        if(l == s.size()) return 1;
        while(s[r] == '0') r--;

        return l>r;
    }
};
