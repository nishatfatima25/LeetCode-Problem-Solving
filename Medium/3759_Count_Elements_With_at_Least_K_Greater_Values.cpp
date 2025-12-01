// LeetCode Problem : 3759. Count Element With at Least K Greater Values
// Link : https://leetcode.com/problems/count-elements-with-at-least-k-greater-values/description/

class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        int count=0;

        for(int i=0; i<n; i++){
           int greater = n-(upper_bound(nums.begin(), nums.end(), nums[i])- nums.begin());

           if(greater >=k) count++;
        }

        return count;
    }
};
