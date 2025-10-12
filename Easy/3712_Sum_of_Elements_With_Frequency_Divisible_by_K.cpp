// LeetCode Problem : 3712. Sum of Elements With Frequency Divisible by K
// Link : https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/description/

class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        
        unordered_map<int,int> mpp;

        for(auto x : nums) mpp[x]++;

        int ans=0;

        for(auto it : mpp){
            if(it.second % k ==0) ans += it.first * it.second;
        }

        return ans;
    }
};
