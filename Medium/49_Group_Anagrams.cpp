// LeetCode Problem : 49. Group Anagrams
// Link : https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> ans;

        for(string& s : strs){
            string st = s;
            sort(st.begin(), st.end());
            ans[st].push_back(s);
        }

        vector<vector<string>> answer;

        for(auto& it : ans){
            answer.push_back(it.second);
        }

        return answer;
    }
};
