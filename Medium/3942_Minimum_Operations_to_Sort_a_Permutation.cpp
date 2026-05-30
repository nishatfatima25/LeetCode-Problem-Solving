// LeetCode Problem : 3942. Minimum Operations to Sort a Permutation
// Link : https://leetcode.com/problems/minimum-operations-to-sort-a-permutation/description/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        int x = 0, y =0;

        for(int i=1; i<n; i++){
            if(nums[i] == 0) idx = i;
            if(nums[i] != nums[i-1] + 1) x++;
            if(nums[i]+1 != nums[i-1]) y++;
        }

        if(x > 1 && y >1) return -1;
        if(x == 0) return 0;
        else if(y == 0) return 1;

        if(idx < n-1 && nums[idx+1] == n-1) return min(nums[n-1]+1, n-idx);
        else return min(nums[n-1]+3, n-nums[n-1]-1);
    }
};
