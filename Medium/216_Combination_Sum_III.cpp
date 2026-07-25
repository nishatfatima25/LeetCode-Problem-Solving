// LeetCode Problem : 216. Combination Sum III
// Link : https://leetcode.com/problems/combination-sum-iii/description/

class Solution {
public:

    void solve(vector<int> &input, vector<int> &output, int idx, int target, int k,vector<vector<int>> &ans){

        if(target == 0){
            if(output.size() == k) ans.push_back(output);
            return;
        }

        if(idx == input.size() || target < 0 || output.size() > k) return;

        output.push_back(input[idx]);
        solve(input,output,idx+1,target-input[idx],k,ans);

        output.pop_back();
        solve(input,output,idx+1,target,k,ans);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output;
        vector<int> input;
        for(int i=1; i<=9; i++) input.push_back(i);

        solve(input,output,0,n,k,ans);
        return ans;
    }
};
