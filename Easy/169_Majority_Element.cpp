// LeetCode problem : 169. Majority Element 
// Link : https://leetcode.com/problems/majority-element/description/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //moore's voting algorithm
        
        int n = nums.size();
        int element;
        int count=0;

        //find majority element by moore's algo
        for(int i=0; i< n; i++){
            if(count == 0){
               count = 1;
               element = nums[i];
            }

            else if(nums[i] == element ){
                count++;
            }
            else{
                count--;
            }
        }

        // verify if it's the majority element or not by finding its occ (>n/2)
        int count1=0;
        for(int i=0; i<n; i++){
            if(nums[i] == element){
                count1++;
            }
        }

        int ans;
        if(count1 > n/2){
            ans = element;
        }

        return ans;
    }
};
