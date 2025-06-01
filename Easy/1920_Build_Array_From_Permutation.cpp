// LeetCode Problem : 1920. Build Array from Permutation
// Link : https://leetcode.com/problems/build-array-from-permutation/description/

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        vector<int> ans(nums.size(), 0);
        for(int i=0; i<nums.size(); i++){
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};
