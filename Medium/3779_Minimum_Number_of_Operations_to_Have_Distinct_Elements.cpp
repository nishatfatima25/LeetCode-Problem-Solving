// LeetCode Problem : 3779. Minimum Number of Operations to Have Distinct Elements
// Link : https://leetcode.com/problems/minimum-number-of-operations-to-have-distinct-elements/description/

class Solution {
public:
    int minOperations(vector<int>& nums) {

        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        int idx = -1;
        for(int i=0; i<nums.size(); i++){
            if(mpp.count(nums[i]) && mpp[nums[i]] >=2){
                mpp[nums[i]]--;
                if(mpp[nums[i]] == 0) mpp.erase(nums[i]);
                idx = i;
            }
        }

        if(idx == -1) return 0;
        int count = idx+1;

        return (count+2)/3;

    }
};
