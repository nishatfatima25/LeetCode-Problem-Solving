// LeetCode Problem : 961. N-Repeated Elements in Size 2N Array
// Link : https://leetcode.com/problems/n-repeated-element-in-size-2n-array/description/

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int n = nums.size()/2;

        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        int ans;
        for(auto it : mpp){
            if(it.second == n) ans = it.first;
        }

        return ans;
    }
};
