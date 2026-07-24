// LeetCode Problem : 90. Subsets II
// Link : https://leetcode.com/problems/subsets-ii/description/

class Solution {
public:

    void solve(vector<int> input, vector<int> output, vector<vector<int>> &ans){
        if(input.size() == 0){
            ans.push_back(output);
            return;
        }

        int first = input[0];
        vector<int> rem(input.begin()+1,input.end());
        solve(rem,output,ans);

        output.push_back(first);
        solve(rem,output,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> output;
        solve(nums,output,ans);

        set<vector<int>> st(ans.begin(),ans.end());
        vector<vector<int>> res(st.begin(),st.end());

        return res;
    }
};
