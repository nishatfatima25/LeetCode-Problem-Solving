// LeetCode Problem : 3862. Find the Smallest Balanced Index
// Link : https://leetcode.com/problems/find-the-smallest-balanced-index/description/

class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        int n = nums.size();
        int ans = -1;
        vector<long long> prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i=1; i<n; i++) prefixSum[i] = nums[i] + prefixSum[i-1];

        unsigned long long prod = 1;
        for(int i=n-1; i>=0; i--){
            if(i>0 && prefixSum[i-1] == prod) ans = i;
            if(prod > prefixSum[n-1]) break;

            prod = prod * nums[i];
        }

        return ans;
    }
};
