// LeetCode Problem : 3289. The Two Sneaky Numbers of Digitville
// Link : https://leetcode.com/problems/the-two-sneaky-numbers-of-digitville/description/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> mpp;

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        vector<int> ans;
        for(auto it : mpp){
            int freq = it.second;

            if(freq > 1) ans.push_back(it.first);
        }

        return ans;
    }
};
