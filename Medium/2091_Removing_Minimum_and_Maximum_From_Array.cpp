// LeetCode Problem : 2091. Removing Minimum and Maximum From Array
// Link : https://leetcode.com/problems/removing-minimum-and-maximum-from-array/description/

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int minIdx = -1, maxIdx=-1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] < mini){
                mini = nums[i];
                minIdx = i;
            }
            if(nums[i] > maxi){
                maxi = nums[i];
                maxIdx = i;
            }
        }

        int i = minIdx, j = maxIdx;
        if(i>j) swap(i,j);

        int opt1 = j+1;
        int opt2 = n-i;
        int opt3 = (i+1) + (n-j);

        return min({opt1,opt2,opt3});
    }
};
