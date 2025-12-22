// LeetCode Problem : 164. Maximum Gap
// Link : https://leetcode.com/problems/maximum-gap/description/

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int maxi = 0;

        for(int i=0; i<nums.size()-1; i++){
            int diff = nums[i+1] - nums[i];
            maxi = max(maxi,diff);
        }

        return maxi;
    }
};
