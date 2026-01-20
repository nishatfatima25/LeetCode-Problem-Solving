// LeetCode Problem : 3314. Construct the Minimum Bitwise Array I
// Link : https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/description/

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {

        vector<int> ans;
        ans.reserve(nums.size());

        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 2) ans.push_back(-1);
            else{
                long long value = nums[i];
                long long bt = (value+1) & -(value+1);
                int x = nums[i] - (bt >> 1);
                ans.push_back(x);
            }
        }

        return ans;
    }
};
