// LeetCode Problem : 806. Number of Lines To Write String
// Link : https://leetcode.com/problems/number-of-lines-to-write-string/description/

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        int i=0;
        int count =0;
        int width = 0;

        while(i < s.size()){
            width += widths[s[i] - 'a'];

            if(width > 100){
                width = widths[s[i] - 'a'];
                count++;
            }
            i++;
        }

        return {count+1, width};
    }
};
