// LeetCode Problem : 3228. Maximum Number of Operations to Move Ones to the End
// Link : https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end/description/

class Solution {
public:
    int maxOperations(string s) {
        int ans = 0;
        int count1 = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '1') count1++;
            else if(i>0 && s[i-1] == '1') ans += count1;
        }

        return ans;
    }
};
