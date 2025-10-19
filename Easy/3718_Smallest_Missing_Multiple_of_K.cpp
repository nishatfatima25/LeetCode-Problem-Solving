// LeetCode Problem : 3718. Smallest Missing Multiple of K
// Link : https://leetcode.com/problems/smallest-missing-multiple-of-k/description/

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

        for(int i=0; i<nums.size(); i++) mpp[nums[i]]++;

        int minMul=k;

        while(true){
            if(mpp.find(minMul) == mpp.end()){
                return minMul;
            }

            minMul += k;
        }

        return -1;
    }
};
