// LeetCode Problem : 3904. Smallest Stable Index II
// Link : https://leetcode.com/problems/smallest-stable-index-ii/description/

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr(n);
        arr[n-1] = nums[n-1];

        for(int i=n-2; i>=0; i--) arr[i] = min(arr[i+1],nums[i]);

        int pref = nums[0];
        for(int i=0; i<n; i++){
            pref = max(pref,nums[i]);
            int val = pref-arr[i];
            if(val <= k) return i;
        }

        return -1;
    }
};
