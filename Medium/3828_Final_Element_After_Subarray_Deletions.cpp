// LeetCode Problem : 3828. Final Element After Subarray Deletions
// Link : https://leetcode.com/problems/final-element-after-subarray-deletions/description/

class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums[0],nums.back());
    }
};
