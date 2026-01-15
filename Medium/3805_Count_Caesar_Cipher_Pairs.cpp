// LeetCode Problem : 3805. Count Caesar Cipher Pairs
// Link : https://leetcode.com/problems/count-caesar-cipher-pairs/description/

class Solution {
public:
    long long countPairs(vector<string>& words) {
        unordered_map<string, long long> mpp;

        for(string s : words){
            int shift = s[0] - 'a';
            string key = s;

            for(char &ch : key){
                ch = (ch-'a'-shift+26) % 26 - 'a';
            }
            mpp[key]++;
        }

        long long ans = 0;
        for(auto it : mpp){
            long long k = it.second;
            ans += k*(k-1)/2;
        }
        return ans;
    }
};
