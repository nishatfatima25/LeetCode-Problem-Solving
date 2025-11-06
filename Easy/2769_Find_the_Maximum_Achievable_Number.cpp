// LeetCode Problem : 2769. Find the Maximum Achievable Number
// Link : https://leetcode.com/problems/find-the-maximum-achievable-number/description/

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int result = num;

        for(int i=1; i<=t; i++){
            result += 2;
        }

        return result;
    }
};
