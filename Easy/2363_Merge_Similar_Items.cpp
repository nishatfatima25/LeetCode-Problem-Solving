// LeetCode Problem : 2363. Merge Similar Items
// Link : https://leetcode.com/problems/merge-similar-items/description/

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
        vector<vector<int>> ans;
        map<int,int> mpp;

        for(auto it : items1) mpp[it[0]] += it[1];
        for(auto it : items2) mpp[it[0]] += it[1];
        for(auto it : mpp) ans.push_back({it.first,it.second});

        return ans;
    }
};
