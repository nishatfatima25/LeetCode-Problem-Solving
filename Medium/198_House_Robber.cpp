// LeetCode Problem : 198. House Robber
// Link : https://leetcode.com/problems/house-robber/description/

class Solution {
public:
    int rob(vector<int>& nums) {
        int prev1=0;
        int prev2=0;

        for(int x : nums){
            int val = max(prev1,prev2+x);
            prev2 = prev1;
            prev1 = val;
        }

        return prev1;
    }
};
