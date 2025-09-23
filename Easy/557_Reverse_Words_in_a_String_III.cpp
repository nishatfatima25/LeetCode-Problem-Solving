// LeetCode Problem : 557. Reverse Words in a String III
// Link : https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

class Solution {
public:
    string reverseWords(string s) {
        
        stringstream ss(s);
        string word;
        string ans ="";

        while(ss >> word){
            reverse(word.begin(),word.end());

            if(!ans.empty()) ans += ' ';
            ans += word;
        }

        return ans;
    }
};
