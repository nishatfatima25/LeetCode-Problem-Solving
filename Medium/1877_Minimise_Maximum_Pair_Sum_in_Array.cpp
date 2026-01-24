// LeetCode Problem : 1877. Minimise Maximum Pair Sum in Array
// Link : https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/description/

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int ans = 0;

        int left=0;
        int right = nums.size()-1;

        while(left < right){
            ans = max(ans,nums[left]+nums[right]);
            left++;
            right--;
        }
        return ans;
    }
};
