// LeetCode Problem : 2210. Count Hills and Valleys in an Array
// Link : https://leetcode.com/problems/count-hills-and-valleys-in-an-array/

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int count =0;

        int low =0;

        for(int i=1; i<n-1; i++){
            if(nums[i] != nums[i+1]){
                if((nums[i] > nums[low] && nums[i] > nums[i+1]) ||
                  (nums[i] < nums[low] && nums[i] < nums[i+1])){
                    count++;
                  }

                   low = i;
            }
        }
        return count;
    } 
};
