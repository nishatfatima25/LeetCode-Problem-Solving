// LeetCode Problem : 1752. Check if Array Is Sorted and Rotated
// Link : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] > nums[(i+1)%nums.size()] && ++count >1){
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count =0;

        for(int i=0; i<n; i++){
            if(nums[i] > nums[(i+1) % n]) count++;
        }

        return count <=1;        
    }
};
