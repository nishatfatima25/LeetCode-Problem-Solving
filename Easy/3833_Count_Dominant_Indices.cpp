// LeetCode Problem : 3833. Count Dominant Indices
// Link : https://leetcode.com/problems/count-dominant-indices/description/

class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        
        int k=0;
        int i=1;
        int n = nums.size();
        int count =0;

        while(i<n){
            double sum =0;
            for(int x =i; x<n; x++) sum += nums[x];

            if(nums[k] > sum/(double)(n-i)) count++;

            k++;
            i++;
        }

        return count;
    }
};
