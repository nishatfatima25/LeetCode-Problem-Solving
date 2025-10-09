// LeetCode Problem : 3456. Find Special Substring of Length K
// Link : https://leetcode.com/problems/find-special-substring-of-length-k/description/

class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        
        int n = s.size();
        int i=0;

        for(int j=0; j<n; j++){
            if(s[j] == s[i]) continue;
            if(j-i == k) return true;
            i=j;
        }

        return (n-i) == k;
    }
};
