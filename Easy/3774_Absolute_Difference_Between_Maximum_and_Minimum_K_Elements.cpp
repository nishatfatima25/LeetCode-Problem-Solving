// LeetCode Problem : 3774. Absolute Difference Between Maximum and Minimum K Elements
// Link : https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements/description/

class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int largestSum=0, smallestSum=0;

        for(int i=0; i<k; i++) smallestSum += nums[i];
        for(int i=n-k; i<n; i++) largestSum += nums[i];

        return abs(largestSum-smallestSum);
    }
};
