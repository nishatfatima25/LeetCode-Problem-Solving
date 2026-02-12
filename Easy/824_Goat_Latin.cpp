// LeetCode Problem : 824. Goat Latin
// Link : https://leetcode.com/problems/goat-latin/description/

class Solution {
public:

    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }

    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word;
        string ans = "";
        int idx = 1;

        while(ss >> word){

            char firstChar = tolower(word[0]);
            if(isVowel(firstChar)) word += "ma";
            else word = word.substr(1) + word[0] + "ma";

            word += string(idx, 'a');
            ans += word + " ";
            idx++;
        }

        ans.pop_back();
        return ans;
    }
};
