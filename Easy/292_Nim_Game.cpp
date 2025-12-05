// LeetCode Problem : 292. Nim Game
// Link : https://leetcode.com/problems/nim-game/description/

class Solution {
public:
    bool canWinNim(int n) {
       
        if(n%4 != 0) return true;
        return false;
    }
};
