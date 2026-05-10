// LeetCode Problem : 3925. Concatenate Array With Reverse
// Link : https://leetcode.com/problems/concatenate-array-with-reverse/description/

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans = nums;
        reverse(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++) ans.push_back(nums[i]);
        return ans;
    }
};
