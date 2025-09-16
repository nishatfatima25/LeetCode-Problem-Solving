// LeetCode Problem : 287. Find the Duplicate Number
// Link : https://leetcode.com/problems/find-the-duplicate-number/description/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int left =1;
        int right = nums.size()-1;
        int duplicate = -1;

        while(left <= right){
            int mid = (left+right)/2;
            int count = 0;

            for(int x : nums){
                if(x <= mid) count++;
            }

            if(count > mid){
                duplicate = mid;
                right = mid-1;
            }
            else{
                left = mid + 1;
            }
        }

        return duplicate;
    }
};

//brute force

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        for(int i=0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] == nums[j]) return nums[i];
            }
        }

        return nums.size();
    }
};
