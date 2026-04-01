// LeetCode Problem : 2460. Apply Operations to an Array
// Link : https://leetcode.com/problems/apply-operations-to-an-array/description/
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;0
            }
        }

        int idx = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0) nums[idx++] = nums[i];
        }

        while(idx < nums.size()) nums[idx++] = 0;

        return nums;
    }
};
