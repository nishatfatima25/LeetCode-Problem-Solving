// LeetCode Profile : 3727. Maximum Alternating Sum of Squares
// Link : https://leetcode.com/problems/maximum-alternating-sum-of-squares/description/

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sq(n);
        for (int i = 0; i < n; ++i) sq[i] = 1LL * nums[i] * nums[i];

        sort(sq.begin(), sq.end(), greater<long long>());

        int positives = (n + 1) / 2; 
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            if (i < positives) ans += sq[i];
            else ans -= sq[i];
        }
        return ans;
    }
};
