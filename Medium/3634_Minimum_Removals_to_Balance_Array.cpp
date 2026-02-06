// LeetCode Problem : 3634. Minimum Removals to Balance Array
// Link : https://leetcode.com/problems/minimum-removals-to-balance-array/description/

class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxLen = 0;

        int left = 0;
        for(int right =0; right<n; right++){
            while(nums[right] > (long long)nums[left]*k) left++;

            maxLen = max(maxLen, right-left+1);
        }

        return n-maxLen;
    }
};
