// LeetCode Problem : 3330. Find the Original Typed String I
// Link : https://leetcode.com/problems/find-the-original-typed-string-i/description/

class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;

        for(int i=1; i< word.size(); i++){
            if(word[i-1] == word[i]){
                count++;
            }
        }
        return count;
    }
};
