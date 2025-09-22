// LeetCode Problem : 3005. Count Elements With Maximum Frequency
// Link : https://leetcode.com/problems/count-elements-with-maximum-frequency/description/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        int maxi=0;

        for(int num : nums){
            mpp[num]++;
            maxi= max(maxi,mpp[num]);
        }

        int sum=0;
        for(auto &it : mpp){
            if(it.second == maxi) sum += it.second;
        }
        
        return sum;
    }
};
