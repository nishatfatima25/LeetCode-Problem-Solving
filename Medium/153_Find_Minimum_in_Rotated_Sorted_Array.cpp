// LeetCode Problem : 153. Find Minimum in Rotated Sorted Array
// Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mini = INT_MAX;

        while(low <= high){
            int mid = (low+high)/2;


            //if search space is already sorted
            if(nums[low] <= nums[high]){
                mini = min(mini, nums[low]);
                break;
            }

            //search in left sorted
            if(nums[low] <= nums[mid]){
                mini = min(mini,nums[low]);
                //eliminate left half
                low = mid+1;
            }

            //search in right sorted
            else{
                mini = min(mini, nums[mid]);
                //eliminate the right half
                high = mid-1;
            }
        }

        return mini;
    }
};
