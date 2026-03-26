// LeetCode Problem : 1636. Sort Array by Increasing Frequency
// Link : https://leetcode.com/problems/sort-array-by-increasing-frequency/description/

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int x : nums) mpp[x]++;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;

        for(auto it : mpp){
            int val = it.first;
            int freq = it.second;
            minHeap.push({freq,-val});
        }

        vector<int> ans;
        while(!minHeap.empty()){
            int val = -minHeap.top().second;
            int freq = minHeap.top().first;
            minHeap.pop();
            
            for(int i=1; i<=freq; i++){
                ans.push_back(val);
            }
        }

        return ans;
    }
};
