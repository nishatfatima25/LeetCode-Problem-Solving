// LeetCode Problem : 1935. Maximum Number of Words You Can Type
// Link : https://leetcode.com/problems/maximum-number-of-words-you-can-type/description/

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {

        set<char> st(brokenLetters.begin(), brokenLetters.end());
        int count = 0;
        int i = 0;
        int n = text.size();

        while (i < n) {
            bool canType = true;

            while (i < n && text[i] != ' ') {
                if (st.find(text[i]) != st.end()) {
                    canType = false;
                }
                i++;
            }

            if (canType)
                count++;

            while (i < n && text[i] == ' ')
                i++;
        }

        return count;
    }
};
