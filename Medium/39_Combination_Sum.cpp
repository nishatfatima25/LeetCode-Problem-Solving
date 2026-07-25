// LeetCode Problem : 39. Combination Sum
// Link : https://leetcode.com/problems/combination-sum/description/

class Solution {
public:

    set<vector<int>> st;
    void solve(vector<int> &input, vector<int> &output,int idx,int target,  vector<vector<int>> &ans){

        if(idx == input.size() || target < 0) return;
        if(target == 0){

            if(st.find(output) == st.end()){
                ans.push_back(output);
                st.insert(output);
            }     
            return;
        }

        //single incl
        output.push_back(input[idx]);
        solve(input,output,idx+1,target-input[idx],ans);

        //multiple incl
        solve(input,output,idx,target-input[idx],ans);

        //backtrack
        output.pop_back();

        //excl
        solve(input,output,idx+1,target,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> output;
        vector<vector<int>> ans;

        solve(candidates,output,0,target,ans);
        return ans;
    }
};
