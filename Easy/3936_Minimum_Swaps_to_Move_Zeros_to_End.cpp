// LeetCode Problem : 3936. Minimum Swaps to Move Zeros to End
// Link : https://leetcode.com/problems/minimum-swaps-to-move-zeros-to-end/description/

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zero = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 0) zero++;
        }

        int ans = 0;
        int n = nums.size();
        for(int i = n-zero; i<n; i++){
            if(nums[i] != 0) ans++;
        }

        return ans;
    }
};
