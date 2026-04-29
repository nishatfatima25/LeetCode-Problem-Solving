// LeetCode Problem : 3909. Compare Sums of Bitonic Parts
// Link : https://leetcode.com/problems/compare-sums-of-bitonic-parts/description/

class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long int sum1 = 0, sum2 = 0;
        int flag = 0;
        for(int i=0; i<nums.size(); i++){
            if(i != nums.size()-1){
                if(nums[i] >  nums[i+1] && flag==0){
                    sum1 += nums[i];
                    flag = 1;
                }
            }
            if(flag == 0) sum1 += nums[i];
            else sum2 += nums[i];
        }

        if(sum1 == sum2) return -1;
        else if(sum1 > sum2) return 0;
        return 1;
    }
};
