// LeetCode Problem : 485. Max Consecutive Ones
// Link : https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxCount = 0;

        for(int i=0; i< nums.size(); i++){
            if(nums[i] == 1){
                count++;

                if(count > maxCount){ 
                    maxCount++;
                }
            }
            else if(nums[i] == 0){
                count = 0;
            }
        }

        return maxCount;
    }
};
