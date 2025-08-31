// LeetCode Problem : 1248. Count Number of Nice Subarrays
// Link : https://leetcode.com/problems/count-number-of-nice-subarrays/

class Solution {
public:

    int noOfSubarraysLessThan(vector<int>& nums,int k){
        int left=0, right=0,count=0,sum=0;

        if(k<0) return 0;

        while(right < nums.size()){
            
            sum += nums[right]%2;

            while(sum > k){
                sum -= nums[left]%2;
                left++;
            }

            count += right-left+1;
            right++;
        }

        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int x = noOfSubarraysLessThan(nums,k);
        int y = noOfSubarraysLessThan(nums,k-1);

        return x-y;
    }
};
