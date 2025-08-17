// LeetCode Problem : 1512. Number of Good Pairs
// Link : https://leetcode.com/problems/number-of-good-pairs/description/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;

        unordered_map<int,int> mpp;

        for(int i=0; i<nums.size(); i++){
            if(mpp.find(nums[i]) != mpp.end()){
                count += mpp[nums[i]];
            }

            mpp[nums[i]] = mpp[nums[i]] + 1;
        }

        return count;
    }
};
