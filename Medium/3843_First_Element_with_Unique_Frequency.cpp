// LeetCode Problem : 3843. First Element with Unique Frequency 
// Link : https://leetcode.com/problems/first-element-with-unique-frequency/

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        
        unordered_map<int,int> mpp,freq;

        for(int i=0; i<nums.size(); i++) mpp[nums[i]]++;
        for(auto it : mpp) freq[it.second]++;
        for(auto it : nums) if(freq[mpp[it]] == 1) return it;

        return -1;
    }
};
