// LeetCode Problem : 3804. Number of Centered Subarrays
// Link : https://leetcode.com/problems/number-of-centered-subarrays/description/

class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            int sum =0;
            unordered_map<int,int> mpp;
            for(int j=i; j<nums.size(); j++){
                sum += nums[j];
                mpp[nums[j]]++;
                if(mpp[sum] > 0) count++;
            }
        }

        return count;
    }
};
