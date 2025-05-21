// LeetCode Problem : 58. Length of Last Word
// Link : https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.size();
        int count=0;
        char space = ' ';
        bool keepCounting = false;
        for(int i= n-1; i>=0; i--){
            if(s[i] != space){
                keepCounting = true;
                count++;
            }
            else if (keepCounting){
                break;
            }
        }
        return count;
      
    }
};
