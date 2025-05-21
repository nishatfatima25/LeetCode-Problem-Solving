// LeetCode Problem : 414. Third Maximum Number 
// Link : https://leetcode.com/problems/third-maximum-number/description/

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        //sort in decreasing order
        sort(nums.begin(), nums.end(),greater<int>());


        int count = 1;

        int prevElement = nums[0];

        for(int i=0; i<nums.size(); i++){

            //if not duplicate then inc the count and also change the prev element
            if(nums[i] != prevElement){
                count++;
                prevElement = nums[i];
            }
            
            //if count becomes three return that element
            if(count==3){
            return nums[i];
        }
        }

        //otherwise return the max element
        return nums[0];

    }
};
