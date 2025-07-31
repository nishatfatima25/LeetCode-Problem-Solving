// LeetCode Problem : 215. Kth Largest Element in an Array
// Link : https://leetcode.com/problems/kth-largest-element-in-an-array/description/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());

        int ans ;

        for(int i=0; i<nums.size(); i++){
            ans = nums[k-1];
        }

        return ans;
    }
};
