// LeetCode Problem : 137. Single Number II
// Link : https://leetcode.com/problems/single-number-ii/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i=1; i<nums.size(); i = i+3){
            if(nums[i-1] != nums[i]){
                return nums[i-1];
            }
        }

        return nums[nums.size()-1];
    }
};


// Method - 2

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        for(int bitIdx =0; bitIdx<32; bitIdx++){
            int count = 0;

            for(int i=0; i<n; i++){
                if(nums[i] & (1 << bitIdx)) count++;
            }
            if(count%3 == 1) ans = ans | (1 << bitIdx);
        }

        return ans;
    }
};
