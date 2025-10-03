// LeetCode Problem : 3698. Split Array With Minimum Difference
// Link : https://leetcode.com/problems/split-array-with-minimum-difference/description/

class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int size = nums.size();
        int left = 0;
        int right = size-1;
        long long leftSum=0,rightSum=0;

        while(left < size-1 && nums[left] < nums[left+1]) leftSum += nums[left++];

        while(right > 0 && nums[right-1] > nums[right]) rightSum += nums[right--];

        if(left == right){
            long long opt1 = abs((leftSum + nums[left]) - rightSum);
            long long opt2 = abs(leftSum - (rightSum + nums[left]));
            return min(opt1,opt2);
        }
        else if(right-left == 1 && nums[left] == nums[right]) return abs(leftSum-rightSum);

        else return -1;
    }
};
