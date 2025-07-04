// LeetCode Problem : 804. Unique Morse Code Words
// Link : https://leetcode.com/problems/unique-morse-code-words/description/

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",
                                ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
                                "...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> st;
        for (const string& word : words) {
            string code;
            for (char c : word) code += morse[c - 'a'];
            st.insert(code);
        }
        return st.size();
    }
};
