// LeetCode Problem : 594. Longest Harmonious Subsequence
// Link : https://leetcode.com/problems/longest-harmonious-subsequence/description/

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int maxi =0;

        for(int x : nums){
            mpp[x]++;
        }

        for(auto& it : mpp){
            int val = it.first;
            if(mpp.count(val+1)){
                maxi = max(maxi, mpp[val] + mpp[val+1]);
            }
        }

        return maxi;
    }
};
