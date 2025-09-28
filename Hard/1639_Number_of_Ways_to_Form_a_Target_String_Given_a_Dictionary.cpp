// LeetCode Problem : 1639. Number of Ways to Form a Target String Given a Dictionary 
// Link : https://leetcode.com/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/description/

class Solution {
public:
    int numWays(vector<string>& words, string target) {
        const int MOD = 1e9 + 7;
        int m = words.size(), n = words[0].size(), t_len = target.size();
        vector<vector<int>> char_count(n, vector<int>(26, 0));
        
        for (const string& word : words) {
            for (int idx = 0; idx < n; ++idx) {
                char_count[idx][word[idx] - 'a']++;
            }
        }
        
        vector<long long> dp(t_len + 1, 0);
        dp[0] = 1;
        
        for (int j = 0; j < n; ++j) {
            for (int i = t_len; i >= 1; --i) {
                dp[i] = (dp[i] + dp[i - 1] * char_count[j][target[i - 1] - 'a']) % MOD;
            }
        }
        
        return dp[t_len];
    }
};
