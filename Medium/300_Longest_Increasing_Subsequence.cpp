// LeetCode Problem : 300. Longest Increasing Subsequence
// Link : https://leetcode.com/problems/longest-increasing-subsequence/description/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> temp;

        for(int x : nums){
            auto it = lower_bound(temp.begin(),temp.end(),x);
            if(it == temp.end()) temp.push_back(x);
            else *it = x;
        }

        return temp.size();

    }
};
