// LeetCode Problem : 2966. Divide Array Into Arrays With Max Difference
// Link : https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/description/

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i = i+3){
            if(nums[i+2] - nums[i] > k){
                return {};
            }
            result.push_back({nums[i], nums[i+1], nums[i+2]});
        }

        return result;
    }
};
