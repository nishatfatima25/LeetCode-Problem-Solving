// LeetCode Problem : 162. Find Peak Element
// Link : https://leetcode.com/problems/find-peak-element/description/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();

        if(n==1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[n-1] > nums[n-2]) return n-1;

        int low = 1;
        int high = n-2;

        while(low <= high){

            int mid = (low+high)/2;

            if(nums[mid] > nums[mid-1] && nums[mid]> nums[mid+1]) return mid;

            //when we are in left
            if(nums[mid] > nums[mid-1]){
                // so peak element is in right , bring the search space there
                low = mid+1;
            }
            //when we are in right
            else{
                // peak element is in left , bring the search space there
                high = mid -1;
            }
        }

        return -1;
    }
};
