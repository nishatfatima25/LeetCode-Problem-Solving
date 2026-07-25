// LeetCode Problem : 40. Combination Sum II
// Link : https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:

    void solve(vector<int> &input, vector<int> &output, int idx, int target,
    vector<vector<int>> &ans){

        if(target == 0){
           ans.push_back(output);
           return;
        }

        if(idx == input.size() || target < 0) return;

        //incl
        output.push_back(input[idx]);
        solve(input,output,idx+1,target-input[idx],ans);

        //backtrack
        output.pop_back();

        //dupl remove 
        while(idx+1 < input.size() && input[idx] == input[idx+1]) idx++;

        //excl
        solve(input,output,idx+1,target,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> output;
        solve(arr,output,0,target,ans);

        return ans;
    }
};
