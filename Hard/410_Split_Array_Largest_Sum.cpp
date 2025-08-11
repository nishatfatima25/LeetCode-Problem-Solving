// LeetCode Problem :  410. Split Array Largest Sum
// Link : https://leetcode.com/problems/split-array-largest-sum/description/

class Solution {
public:

    int countSplit(vector<int>& nums, int sum){
        int split = 1;
        int maxSubArray = 0;

        for(int i=0; i<nums.size(); i++){
            if(maxSubArray + nums[i] <= sum){
                maxSubArray += nums[i];
            }
            else{
                split++;
                maxSubArray = nums[i];
            }
        }

        return split;
    }

    int splitArray(vector<int>& nums, int k) {
        
        int low = *max_element(nums.begin() , nums.end());
        int high = accumulate(nums.begin() , nums.end(), 0);

        while(low <= high){
            int mid = (low+high)/2;

            int splits = countSplit(nums,mid);

            if(splits > k) low = mid+1;
            else high = mid-1;
        }

        return low;
    }
};
