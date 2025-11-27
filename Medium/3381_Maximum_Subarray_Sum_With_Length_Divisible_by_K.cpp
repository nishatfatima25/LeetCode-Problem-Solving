// LeetCode Problem : 3381. Maximum Subarray Sum With Length Divisible by K
// Link : https://leetcode.com/problems/maximum-subarray-sum-with-length-divisible-by-k/description/

class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long n = nums.size();
        vector<long long> pre(k,LLONG_MAX);
        long long prefix = 0;
        long long ans = LLONG_MIN;

        pre[0] = 0;
        for(int i=0; i<n; i++){
            prefix += nums[i];

            int mod = ((i+1) % k);
            if(pre[mod] != LLONG_MAX) ans = max(ans, prefix-pre[mod]);

            pre[mod] = min(pre[mod], prefix);
        }

        return ans;
    }
};
