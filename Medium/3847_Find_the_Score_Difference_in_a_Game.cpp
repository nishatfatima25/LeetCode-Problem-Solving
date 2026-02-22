// LeetCode Problem : 3847. Find the Score Difference in a Game
// Link : https://leetcode.com/problems/find-the-score-difference-in-a-game/description/

class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        
        int first = 0;
        int second = 0;
        int turn1 = 1;

        for(int i=1; i<= nums.size(); i++){
            if(nums[i-1] & 1) turn1 = !turn1;
            if(i%6 == 0) turn1 = !turn1;
            if(turn1) first += nums[i-1];
            else second += nums[i-1];
        }

        return first-second;
    }
};
