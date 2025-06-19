// LeetCode Problem : 2294. Partition Array Such That Maximum Difference Is K
// Link : https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k/description/

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int result = 1;
        int rec = nums[0];

        for(int i=0; i<nums.size(); i++){
            if(nums[i] - rec > k){
                result++;
                rec = nums[i];
            } 
        }

        return result;
    }
};
