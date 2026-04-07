// LeetCode Profile : 376. Wiggle Subsequence 
// Link : https://leetcode.com/problems/wiggle-subsequence/description/

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        int x = 1, y=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[i-1]) x = y+1;
            else if(nums[i] < nums[i-1]) y = x+1;
        }

        return max(x,y);
    }
};
