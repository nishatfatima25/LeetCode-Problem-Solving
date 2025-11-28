// LeetCode Problem : 2068. Check Whether Two Strings are Almost Equivalent
// Link : https://leetcode.com/problems/check-whether-two-strings-are-almost-equivalent/description/

class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;

        for(int i=0; i<word1.size(); i++){
            mpp1[word1[i]]++;
        }
        for(int i=0; i<word2.size(); i++){
            mpp2[word2[i]]++;
        }

       for(char ch = 'a'; ch <= 'z'; ch++) {
            int f1 = mpp1[ch];
            int f2 = mpp2[ch];

            if(abs(f1 - f2) > 3)
                return false;
        }


        return true;
    }
};
