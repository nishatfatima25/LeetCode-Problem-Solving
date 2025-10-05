// LeetCode Problem : 3701. Compute Alterbating Sum
// Link : https://leetcode.com/problems/compute-alternating-sum/description/

class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum=0;

        for(int i=0; i<nums.size(); i++){
            if(i%2 == 0) sum += nums[i];
            else sum -= nums[i];
        }

        return sum;
    }
};
