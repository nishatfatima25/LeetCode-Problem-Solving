// LeetCode Problem : 3653. XOR After Range Multiplication Queries I
// Link : https://leetcode.com/problems/xor-after-range-multiplication-queries-i/description/

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int mod = 1e9+7;

        for(int i=0; i<queries.size(); i++){
            int l = queries[i][0];
            int r = queries[i][1];
            int k = queries[i][2];
            int v = queries[i][3];

            for(int j = l; j<=r; j+=k) nums[j] = (1LL*nums[j]*v) % mod;
        }

        int ans = 0;
        for(int i=0; i<nums.size(); i++) ans ^= nums[i];
        return ans;
    }
};
