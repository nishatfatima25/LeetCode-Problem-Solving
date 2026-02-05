// LeetCode Problem : 3379. Transformed Array
// Link : https://leetcode.com/problems/transformed-array/description/

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            ans[i] = nums[((i+nums[i])%n + n) %n];
        }

        return ans;
    }
};
