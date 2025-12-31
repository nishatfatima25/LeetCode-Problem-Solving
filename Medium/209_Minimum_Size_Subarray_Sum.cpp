// LeetCode Problem : 209. Minimum Size Subarray Sum
// Link : https://leetcode.com/problems/minimum-size-subarray-sum/description/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int left =0, right =0;
        int sum = 0;
        int ans = INT_MAX;

        while(right < n){
            sum += nums[right];

            while(sum >= target){
                ans = min(ans,right-left+1);
                sum -= nums[left];
                left++;
            }
            right++;
        }

        if(ans == INT_MAX) return 0;
        return ans;
    }
};
