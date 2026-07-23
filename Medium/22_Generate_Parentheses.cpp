// LeetCode Problem : 22. Generate Parentheses
// Link : https://leetcode.com/problems/generate-parentheses/description/

class Solution {
public:

    void solve(int open, int close, string out, vector<string> &ans){
        if(open == 0 && close == 0){
            ans.push_back(out);
            return;
        }

        //choice for open
        if(open != 0){
            string out1 = out;
            out1.push_back('(');
            solve(open-1,close,out1,ans);
        }

        //choice for close
        if(close > open){
            string out2 = out;
            out2.push_back(')');
            solve(open,close-1,out2,ans);
        }
        return;
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open = n;
        int close = n;
        string out = "";

        solve(open,close,out,ans);
        return ans;
    }
};
