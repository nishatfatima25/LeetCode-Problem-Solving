// LeetCode Link : 140. Word Break II
// Link : https://leetcode.com/problems/word-break-ii/description/


class Solution {
public:

    void solve(string &s, int idx, string curr, unordered_set<string> &st, vector<string> &ans){
        if(idx == s.size()){
            curr.pop_back();
            ans.push_back(curr);
            return;
        }

        string temp = "";
        for(int i =idx; i<s.size(); i++){
            temp += s[i];

            if(st.find(temp) != st.end()) solve(s,i+1,curr+temp+" ",st,ans);
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(),wordDict.end());
        vector<string> ans;
        solve(s,0,"",st,ans);

        return ans;
    }
};
