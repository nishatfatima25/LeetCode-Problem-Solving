// LeetCode Problem : 71. Simplify Path
// Link : https://leetcode.com/problems/simplify-path/description/

class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string> st;
        string str = "";

        for(int i=0; i<= path.size(); i++){
            if(i==path.size() || path[i] == '/'){
                if(str == "" || str == ".") {}
                else if(str == ".."){
                    if(!st.empty()) st.pop();
                }
                else st.push(str);

                str = "";
            }
            else str += path[i];
        }

        if(st.empty()) return "/";
        stack<string> st2;

        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }

        string ans ="";
        while(!st2.empty()){
            ans += '/';
            ans += st2.top();
            st2.pop();
        }

        return ans;
    }
};
