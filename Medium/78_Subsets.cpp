// LeetCode Problem : 78. Subsets
// Link : https://leetcode.com/problems/subsets/description/

class Solution {

private:
    void printSubset(int index, vector<int> &nums, vector<int> &current, vector<vector<int>> &ans){

        if(index == nums.size()){
            ans.push_back(current);
            return;
        }

        current.push_back(nums[index]);
        printSubset(index+1, nums, current, ans);

        current.pop_back();
        printSubset(index+1, nums, current, ans);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;

        printSubset(0,nums,current,ans);

        return ans;
    }
};
