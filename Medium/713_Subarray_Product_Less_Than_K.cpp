// LeetCode Problem : 713. Subarray Product Less Than K
// Link : https://leetcode.com/problems/subarray-product-less-than-k/description/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1;
        int left = 0, right = 0;
        int count = 0;

        if(k<=1) return 0;

        while(right < nums.size()){
            product *= nums[right];

            while(product >= k){
                product /= nums[left];
                left++;
            }

            count += right-left+1;
            right++;
        }

        return count;
    }
};
