// LeetCode Problem : Move Zeroes
// Link : https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //optimal sol - two pointers method
        int n = nums.size();

        // initialise a pointer at -1 index 
        int j =-1;

        // make j point to the first encountered value of zero
        for(int i=0; i<n ; i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }

        if(j==-1){
            return;
        }

        //now, swap the non zero elements with zero and increment the j pointer..as i keeps on moving and j increments when swapped with non zero
        for(int i=j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
