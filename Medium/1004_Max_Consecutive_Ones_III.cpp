// LeetCode Problem : 1004. Max Consecutive Ones III
// Link : https://leetcode.com/problems/max-consecutive-ones-iii/description/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int size = nums.size();
        int left =0, right = 0;
        int zeroes = 0, maxLen=0;

        while(right < size){

            if(nums[right] == 0) zeroes++;

            if(zeroes > k){
                if(nums[left] == 0) zeroes--;
                left++;
            }

            if(zeroes <= k){
                int len = right - left + 1;
                maxLen = max(len,maxLen);
            }

            right++;
        }

        return maxLen;
    }
};
