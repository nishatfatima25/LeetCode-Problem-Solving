// LeetCode Problem : 3689. Maximum Total Subarray Value I
// Link : https://leetcode.com/problems/maximum-total-subarray-value-i/description/

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxi =INT_MIN;
        long long mini = INT_MAX;

        for(long long num : nums){
            maxi = max(maxi,num);
            mini = min(mini,num);
        }

        return k*(maxi-mini);
    }
};
