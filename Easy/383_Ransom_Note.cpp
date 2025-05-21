// LeetCode Problem : 383. Ransom Note
// Link : https://leetcode.com/problems/ransom-note/description/

class Solution {
public:
    
    bool canConstruct(string ransomNote, string magazine) {
        int letterCount[26] = {0};
        for (char c : magazine) {
            letterCount[c - 'a']++;
        }
        for (char c : ransomNote) {
            if (letterCount[c - 'a'] == 0) {
                return false;
            }
            letterCount[c - 'a']--;
        }
        return true;
    }
};
