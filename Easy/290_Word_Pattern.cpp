// LeetCode Problem : 290. Word Pattern
// Link : https://leetcode.com/problems/word-pattern/description/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> arr;
        string word = "";

        for(char ch : s){
            if(ch == ' '){
                if(!word.empty()){
                    arr.push_back(word);
                    word = "";
                }
            }
            else{
                word = word + ch;
            }
        }

        if(!word.empty()){
            arr.push_back(word);
        }
        if(pattern.size() != arr.size()){
            return false;
        }

        unordered_map<char, string> chToWord;
        unordered_map<string, char> wordToCh;

        for(int i=0; i<pattern.size(); i++){
            char ch = pattern[i];
            string w = arr[i];

            if(chToWord.count(ch)){
                if(chToWord[ch] != w) return false;
            }
            else{
                if(wordToCh.count(w)) return false;
                chToWord[ch] = w;
                wordToCh[w] = ch;
            }
        }

        return true;
    }
};
