// LeetCode Problem : 1658. Minimum Operations to Reduce X to Zero
// Link : https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/description/

class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total = accumulate(nums.begin(),nums.end(),0);

        int target = total-x;
        if(target < 0) return -1;
        if(target == 0) return n;

        int left = 0;
        int sum = 0;
        int maxi = -1;

        for(int right = 0; right < n; right++){
            sum += nums[right];

            while(left <= right && sum > target){
                sum -= nums[left];
                left++;
            }

            if(sum == target) maxi = max(maxi,right-left+1);
        }

        if(maxi == -1) return -1;
        return n-maxi;
    }
};
