// LeetCode Problem : 2221. Find Triangular Sum of an Array
// Link : https://leetcode.com/problems/find-triangular-sum-of-an-array/description/

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int n = nums.size();

        for(int i=n; i >1; i--){
            for(int j=0; j<n-1; j++){
                nums[j] = (nums[j] + nums[j+1]) % 10;
            }
        }

        return nums[0];
    }
};
