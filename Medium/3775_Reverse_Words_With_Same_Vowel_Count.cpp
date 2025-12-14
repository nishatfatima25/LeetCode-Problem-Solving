// LeetCode Problem : 3775. Reverse Words With Same Vowel Count
// Link : https://leetcode.com/problems/reverse-words-with-same-vowel-count/description/

class Solution {
public:
    bool vowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    int countVowel(string s) {
        int count = 0;
        for (char ch : s) {
            if (vowel(ch))
                count++;
        }

        return count;
    }

    string reverseWords(string s) {

        vector<string> word;
        string temp = "";

        for (char ch : s) {
            if (ch == ' ') {
                word.push_back(temp);
                temp = "";
            } else
                temp += ch;
        }
        word.push_back(temp);

        int first = countVowel(word[0]);

        for (int i = 1; i < word.size(); i++) {
            if (countVowel(word[i]) == first)
                reverse(word[i].begin(), word[i].end());
        }

        string ans = word[0];
        for (int i = 1; i < word.size(); i++) {
            ans += " " + word[i];
        }

        return ans;
    }
};
