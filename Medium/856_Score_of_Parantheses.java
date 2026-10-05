// LeetCode Problem : 856. Score of Parantheses
// Link : https://leetcode.com/problems/score-of-parentheses/description/

class Solution {
    public int scoreOfParentheses(String s) {
        Stack<Integer> st = new Stack<>();
        st.push(0);

        for(char ch : s.toCharArray()){
            if(ch == '(') st.push(0);
            else{
                int in = st.peek();
                st.pop();

                if(in == 0){
                    int under = st.peek();
                    st.pop();
                    st.push(under+1);
                }
                else{
                    int under = st.peek();
                    st.pop();
                    st.push(under + 2*in);
                }
            }
        }
        return st.peek();
    }
}
