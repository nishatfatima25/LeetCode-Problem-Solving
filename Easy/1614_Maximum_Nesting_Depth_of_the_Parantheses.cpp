// LeetCode Problem : 1614. Maximum Nesting Depth of the Parentheses
// Link : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0, curr = 0;

        for(int i=0; i< s.size(); i++){
            if(s[i] == '('){
                curr++;
                maxi = max(curr,maxi);
            }
            else if(s[i] == ')') curr--;
        }

        return maxi;
    }
};
