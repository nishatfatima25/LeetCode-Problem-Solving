// LeetCode Problem : 1758. Minimum Changes To Make Alternating Binary String
// Link : https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/description/

class Solution {
public:
    int minOperations(string s) {
        int ans = 0;
        int x=0;
        for(int i=0; i<s.size(); i++){
            if(i%2 == 0 && s[i] != '0') x++;
            if(i%2 != 0 && s[i] != '1') x++;
        }

        int y=0;
        for(int i=0; i<s.size(); i++){
            if(i%2 == 0 && s[i] != '1') y++;
            if(i%2 != 0 && s[i] != '0') y++;
        }
        ans = min(x,y);
        return ans;
    }
};
