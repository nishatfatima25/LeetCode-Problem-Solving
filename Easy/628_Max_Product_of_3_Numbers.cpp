// LeetCode Problem : 628. Maximum Product of Three Numbers
// Link : https://leetcode.com/problems/maximum-product-of-three-numbers/description/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int product = nums[0]*nums[1]*nums[n-1];
        int pro = nums[n-1]*nums[n-2]*nums[n-3];

        int result = max(product, pro);
        return result;
    }
};
