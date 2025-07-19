// LeetCode Problem : 81. Search in Rotated Sorted Array II
// Link : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

//brute force - linear search

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                return true;
            }
        }
        
        return false;
    }
};


//optimal aproach - binary search

class Solution {
public:
    bool search(vector<int>& nums, int target) {
       
        int low = 0;
        int high = nums.size() - 1;

        while(low<=high){
            int mid = (low+high)/2;

            if(nums[mid] == target){
                return true;
            }
            
            //since duplicates are also present here, so we will look for this edge
            //case

            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                //inc low pointer and dec high pointer
                low++;
                high--;
                continue;
            }

            //check if left sorted
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target < nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }

            //check if right is sorted
            else{
                if(nums[mid]< target && target <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }

        return false;
    }
};
