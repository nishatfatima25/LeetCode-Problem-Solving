// LeetCode Problem : 930. Binary Subarrays With Sum
// Link : https://leetcode.com/problems/binary-subarrays-with-sum/description/

class Solution {
public:

    int subArrayWithLessThanSum(vector<int>& nums, int goal){
        int left = 0, right =0;
        int sum=0,count=0;

        if(goal < 0) return 0;

        while(right < nums.size()){
            sum = sum + nums[right];
            
            while(sum >goal){
                sum = sum - nums[left];
                left++;
            }

            count += (right-left+1);

            right++;
        }

        return count;

    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int x = subArrayWithLessThanSum(nums,goal);
        int y = subArrayWithLessThanSum(nums,goal-1);

        return x-y;
    }
};


// Brute
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        int count=0;

        for(int i=0; i<nums.size(); i++){
            int sum =0;
            
            for(int j=i; j<nums.size(); j++){

                sum += nums[j];

                if(sum == goal){
                    count++;
                }
            }
        }

        return count;
    }
};
