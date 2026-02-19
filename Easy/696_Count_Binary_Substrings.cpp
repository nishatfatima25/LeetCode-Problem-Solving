// LeetCode Problem : 696. Count Binary Substrings
// Link : https://leetcode.com/problems/count-binary-substrings/description/

class Solution {
public:
    int countBinarySubstrings(string s) {
        
        int ans = 0;
        int prevGrp = 0;
        int currGrp = 1;

        for(int i=1; i<s.size(); i++){

            if(s[i] == s[i-1]) currGrp++;
            else{
                prevGrp = currGrp;
                currGrp = 1;
            }

            if(currGrp <= prevGrp) ans++;
        }

        return ans;
    }
};
