// LeetCode Problem : 3121. Count the Number of Special Characters II
// Link : https://leetcode.com/problems/count-the-number-of-special-characters-ii/description/

class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,int> lastLower;
        map<char,int> firstUpper;

        for(int i=0; i<word.size(); i++){
            char ch = word[i];

            if(ch >= 'a' && ch <= 'z') lastLower[ch] = i;
            else{
                char lower = ch - 'A' + 'a';

                if(firstUpper.find(lower) == firstUpper.end()) firstUpper[lower] = i;
            }
        }

        int count = 0;
        for(char ch = 'a'; ch <= 'z'; ch++){
            if(lastLower.count(ch) && firstUpper.count(ch) && lastLower[ch] < firstUpper[ch]) count++;
        }

        return count;
    }
};
