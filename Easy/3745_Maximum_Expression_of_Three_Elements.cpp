// LeetCode Problem : 3745. Maximum Expression of Three Elements
// Link : https://leetcode.com/problems/maximize-expression-of-three-elements/description/

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        int ans = nums[0] + nums[1] - nums[n-1];

        return ans;
    }
};
