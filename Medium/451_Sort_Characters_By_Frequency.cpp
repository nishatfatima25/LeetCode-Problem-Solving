// LeetCode Problem : 451. Sort Characters By Frequency
// Link : https://leetcode.com/problems/sort-characters-by-frequency/description/

class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> freq;

        for(char ch : s){
            freq[ch]++;
        }

        vector<pair<char,int>> vec(freq.begin(), freq.end());

        sort(vec.begin(),vec.end(),[](auto &a, auto&b){
            return a.second > b.second;
        });

        string ans;
        for(auto &it : vec){
            ans.append(it.second, it.first);
        }

        return ans;
    }
};
