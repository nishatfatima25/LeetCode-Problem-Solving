// LeetCode Problem : 922. Sort Array By Parity II
// Link : https://leetcode.com/problems/sort-array-by-parity-ii/description/

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int j=1;

        for(int i=0; i<n; i +=2){
            if(nums[i] %2 != 0){
                while(nums[j] %2 != 0) j += 2;
                swap(nums[i],nums[j]);
            }
        }

        return nums;
    }
};
