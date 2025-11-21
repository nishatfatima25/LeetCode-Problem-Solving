// LeetCode Problem : 1930. Unique Length-3 Palindrome Subsequence
// Link : https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        vector<int> first(26, -1), last(26, -1);

    for (int i = 0; i < s.size(); ++i) {
        int idx = s[i] - 'a';
        if (first[idx] == -1) {
            first[idx] = i;
        }
        last[idx] = i;
    }

    bool uniquePalindromes[26][26] = {false};

    for (int i = 0; i < 26; ++i) {
        if (first[i] != -1 && last[i] > first[i]) {
            bool middleCharUsed[26] = {false};
            for (int j = first[i] + 1; j < last[i]; ++j) {
                int middleIdx = s[j] - 'a';
                if (!middleCharUsed[middleIdx]) {
                    middleCharUsed[middleIdx] = true;
                    uniquePalindromes[i][middleIdx] = true;
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < 26; ++j) {
            if (uniquePalindromes[i][j]) {
                count++;
            }
        }
    }

    return count;
    }
};
