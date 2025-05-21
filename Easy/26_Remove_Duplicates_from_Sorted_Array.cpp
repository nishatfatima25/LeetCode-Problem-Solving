// LeetCode Problem : 26. Remove Duplicates from Sorted Array
//Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

    //two pointer

    //start from 0 index
    int i=0;

    //loop from j = i+1 pos upto end to find if there are duplicates, if not found then increase i and put value of j in i+1 
        for(int j=1;j<nums.size();j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }

        //finally return i+1 (bcz of 0th indexing)
        return i+1;
    }
};
