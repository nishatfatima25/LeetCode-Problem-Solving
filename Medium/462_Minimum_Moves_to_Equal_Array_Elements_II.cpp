// LeetCode Problem : 462. Minimum Moves to Equal Array Elements II
// Link : https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int val = nums[nums.size()/2];

        int moves = 0;
        for(int i=0; i<nums.size(); i++) moves += abs(val-nums[i]);
        return moves;
    }
};
