// LeetCode Problem : 3788. Maximum Score of a Split
// Link : https://leetcode.com/problems/maximum-score-of-a-split/description/

class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long sum;
        sum = accumulate(nums.begin(),nums.end(),0LL);

        int n = nums.size();
        long long ans = INT_MIN;
        long long mini = INT_MAX;

        for(int i = n-1; i>=1; i--){
            sum -= nums[i];
            mini = min(mini,(long long)nums[i]);
            long long val = sum - mini;
            ans = max(ans,val);
        }

        return ans;
    }
};
