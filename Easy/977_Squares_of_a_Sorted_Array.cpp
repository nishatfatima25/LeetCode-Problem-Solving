// LeetCode Problem : 977. Squares of a Sorted Array
// Link : https://leetcode.com/problems/squares-of-a-sorted-array/description/


// 1st Method : 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector<int> ans(nums.size(), 0);
        int low = 0;
        int high = nums.size()-1;

        for(int i=nums.size()-1; i>=0; i--){

            if(abs(nums[low]) > abs(nums[high])){
                ans[i] = nums[low]*nums[low];
                low++;
            }
            else{
                ans[i] = nums[high]*nums[high];
                high--;
            }
        }

        return ans;
    }
};


// 2nd Method

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        

        for(int i=0; i<nums.size(); i++){
            nums[i] = pow(nums[i],2);
        }

        sort(nums.begin(), nums.end());
        return nums;
    }
};
