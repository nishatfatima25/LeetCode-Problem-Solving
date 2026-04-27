// LeetCode Problem : 3914. Minimum Operations to Make Array Non Decreasing
// Link : https://leetcode.com/problems/minimum-operations-to-make-array-non-decreasing/

class Solution {
public:
    long long minOperations(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        for(int i=1; i<n; i++){
            if(nums[i]-nums[i-1] < 0) ans += nums[i-1]-nums[i];
        }

        return ans;
    }
};
