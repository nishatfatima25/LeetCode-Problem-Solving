// LeetCode Problem : 658. Find K Closest Elements
// Link : https://leetcode.com/problems/find-k-closest-elements/description/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> maxHeap;
        for(int i=0; i<arr.size(); i++){
            maxHeap.push({abs(x-arr[i]),arr[i]});
            if(maxHeap.size() > k) maxHeap.pop();
        }

        vector<int> ans;
        while(!maxHeap.empty()){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
