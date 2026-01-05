// LeetCode Problem : 3798. Largest Even Number
// Link : https://leetcode.com/problems/largest-even-number/description/

class Solution {
public:
    string largestEven(string s) {
        
        if(s.size()==1 && s[0]=='1') return "";
        if(s.back()=='2') return s;

        while(!s.empty() && s.back() == '1') s.pop_back();
        return s;
    }
};
