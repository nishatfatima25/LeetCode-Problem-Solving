// LeetCode Problem : 151. Reverse Words in a String
// Link : https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while(ss >> word){
            words.push_back(word);
        }

        string ans;
        for(int i= words.size() -1; i>=0; i--){
            ans += words[i];
            if(i != 0){
                ans += " ";
            }
        }
        return ans;
    }
};

//method 2
class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word = "";

        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                word += s[i];
            }
            else{
                if(!word.empty()){
                    st.push(word);
                    word ="";
                }
            }
        }

        if(!word.empty()){
            st.push(word);
        }

        string ans ="";

        while(!st.empty()){
            ans += st.top();
            st.pop();

            if(!st.empty()) ans += ' ';
        }

        return ans;
    }
};
