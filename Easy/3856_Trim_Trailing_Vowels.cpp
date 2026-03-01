// LeetCode Problem : 3856. Trim Trailing Vowels
// Link : https://leetcode.com/problems/trim-trailing-vowels/description/

class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    string trimTrailingVowels(string s) {
        int n = s.size();

        for(int i=n-1; i>=0; i--){
            if(isVowel(s[i])) s.erase(i,1);
            else break;
        }
        return s;
    }
};
