// LeetCode Link : 1018. Binary Prefix Divisible By 5
// Link : https://leetcode.com/problems/binary-prefix-divisible-by-5/description/

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        
        vector<bool> ans;
        int pre = 0;

        for(int i=0; i<nums.size(); i++){
            pre = ((pre << 1) + nums[i]) %5;
            ans.push_back(pre==0);
        }

        return ans;
    }
};
