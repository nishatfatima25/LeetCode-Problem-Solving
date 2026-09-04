// LeetCode Problem : 3903. Smallest Stable Index I
// Link : https://leetcode.com/problems/smallest-stable-index-i/

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffix(n);

        suffix[n-1] = nums[n-1];

        for(int i = n-2; i >= 0; i--){
            suffix[i] = min(nums[i], suffix[i+1]);
        }

        int maxi = 0;

        for(int i = 0; i < n; i++){
            maxi = max(maxi, nums[i]);
            int score = maxi - suffix[i];

            if(score <= k) return i;
        }

        return -1;
    }
};
