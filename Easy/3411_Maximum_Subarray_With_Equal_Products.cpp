// LeetCode Profile : 3411. Maximum Subarray With Equal Products
// Link : https://leetcode.com/problems/maximum-subarray-with-equal-products/description/

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans = 2;
        int prod = 1;
        int start = 0;
        int end = 0;

        while(end < nums.size()){
            while(gcd(prod,nums[end]) > 1){
                prod /= nums[start];
                start++;
            }

            prod *= nums[end];
            ans = max(ans,end-start+1);
            end++;
        }

        return ans;
    }
};
