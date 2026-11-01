// LeetCode Problem : 453. Minimum Moves to Equal Array Elements
// Link : https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long sum = 0;
        int mini = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
            mini = min(mini, nums[i]);
        }

        return sum - (long long)mini * nums.size();
    }
};
