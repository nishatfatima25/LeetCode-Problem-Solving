// LeetCode Problem : 3211. Generate Binary Strings Without Adjacent Zeros
// Link : https://leetcode.com/problems/generate-binary-strings-without-adjacent-zeros/description/

class Solution {
public:

    void solve(int n, string str, vector<string> &ans){
        if(str.size() == n){
            ans.push_back(str);
            return;
        }

        solve(n, str+"1", ans);
        if(str.empty() || str.back() != '0') solve(n,str+"0",ans);
    }

    vector<string> validStrings(int n) {
        vector<string> ans;
        solve(n,"",ans);
        return ans;
    }
};
