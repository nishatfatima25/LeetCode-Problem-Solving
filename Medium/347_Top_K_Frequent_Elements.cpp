// LeetCode Problem : 347. Top K Frequent Elements
// Link : https://leetcode.com/problems/top-k-frequent-elements/description/

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++) mpp[nums[i]]++;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        for(auto it : mpp){
            int val = it.first;
            int freq = it.second;

            minHeap.push({freq,val});
            if(minHeap.size() > k) minHeap.pop();
        }
        vector<int> ans;
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};
