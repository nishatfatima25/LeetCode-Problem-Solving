// LeetCode Problem : 3432. Count Partitions with Even Sum Difference
// Link : https://leetcode.com/problems/count-partitions-with-even-sum-difference/description/

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sum =0;

        for(int i=0; i<n; i++){
            sum += nums[i];
        }

        if(sum %2 == 0) return n-1;

        return 0;
    }
};
