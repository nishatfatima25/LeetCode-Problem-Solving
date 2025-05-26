// LeetCode Problem : 229. Majority Element II
// Link : https://leetcode.com/problems/majority-element-ii/description/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        vector<int> ans;
        for(auto &it : mpp){
            int val = it.first;
            int freq = it.second;

            if(freq > floor(n/3) ){
                ans.push_back(val);
            }
        }

        return ans;
    }
};
