// LeetCode Problem : 3884. First Matching Character From Both Ends
// Link : https://leetcode.com/problems/first-matching-character-from-both-ends/description/

class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        int ans = -1;

        for(int i=0; i<n; i++){
            if(s[i] == s[n-i-1]) ans = n-i-1;
        }
        return ans;
    }
};
