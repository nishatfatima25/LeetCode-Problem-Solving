// LeetCode Problem : 1221. Split a String in Balanced Strings
// Link : https://leetcode.com/problems/split-a-string-in-balanced-strings/description/

class Solution {
public:
    int balancedStringSplit(string s) {
        int count =0;
        int left =0, right =0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'R') right++;
            else if(s[i] == 'L') left++;
            if(left == right){
                count++;
                left = 0;
                right =0;
            }
        }

        return count;
    }
};
