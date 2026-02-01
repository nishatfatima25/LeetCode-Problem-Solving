// LeetCode Problem: 3019. Number of Changing Keys
// Link : https://leetcode.com/problems/number-of-changing-keys/

class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for(int i=1; i<s.size(); i++){
            if(toupper(s[i]) != toupper(s[i-1])) count++;
        }

        return count;
    }
};
