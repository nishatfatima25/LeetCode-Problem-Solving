// LeetCode Problem : 1374. Generate a String With Characters That Have Odd Counts
// Link : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/description/

class Solution {
public:
    string generateTheString(int n) {
        if(n%2 != 0){
            return string(n,'a');
        }
        else return string(n-1,'a') + 'b';
    }
};
