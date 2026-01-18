// LeetCode Problem : 3813. Vowel-Consonant Score
// Link : https://leetcode.com/problems/vowel-consonant-score/description/

class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }

    int vowelConsonantScore(string s) {
        
        int score = 0;
        int vowel =0;
        int consonant = 0;

        for(int i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                if(isVowel(s[i])) vowel++;
                else consonant++;
            }

            if(consonant>0) score = floor(vowel/consonant);
        }

        return score;
    }
};
