// LeetCode Problem : 1021. Remove Outermost Paranthesis
// Link : https://leetcode.com/problems/remove-outermost-parentheses/description/

class Solution {
public:
    string removeOuterParentheses(string s) {
        
        stack<char> stck;
        string ans = "";

        for(char ch : s){

            if(ch == '('){
                if( !stck.empty()){
                ans = ans + ch;
                }
                stck.push(ch);
            }
            else{
                if(!stck.empty() && stck.top() == '('){
                    stck.pop();
                }
                if(!stck.empty()){
                    ans = ans + ch;
                }
            }   
        }
        
        return ans;
    }
};
