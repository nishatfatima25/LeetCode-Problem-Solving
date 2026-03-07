// LeetCode Problem : 3852. Smallest Pair With Different Frequencies
// Link : https://leetcode.com/problems/smallest-pair-with-different-frequencies/description/

class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int> mpp;
        for(int i=0; i<nums.size(); i++) mpp[nums[i]]++;

        int x = -1;
        int count = 0;

        for(auto &it : mpp){
            if(x == -1){
                x = it.first;
                count = it.second;
            }
            else{
                if(it.second != count) return {x,it.first};
            }
        }

        return {-1,-1};
    }
};
