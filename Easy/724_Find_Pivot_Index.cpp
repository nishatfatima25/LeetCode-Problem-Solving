// LeetCode Problem : 724. Find Pivot Index
// Link : https://leetcode.com/problems/find-pivot-index/description/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int left = 0;

        for(int x : nums) sum += x;

        for(int i=0; i<nums.size(); left += nums[i++]){
            if(left *2 == sum - nums[i]) return i;
        }

        return -1;
    }
};
