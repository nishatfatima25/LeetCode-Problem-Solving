// LeetCode Problem : 502. IPO
// Link : https://leetcode.com/problems/ipo/description/

class Solution {
public:

    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<vector<int>> arr;
        for(int i=0; i<profits.size(); i++) arr.push_back({capital[i],profits[i]});
        sort(arr.begin(),arr.end());

        priority_queue<int> maxHeap;
        int i=0;
        while(k--){
                while(i<arr.size() && arr[i][0] <= w){
                    maxHeap.push(arr[i][1]);
                    i++;
                }
                if(maxHeap.empty()) break;

                w += maxHeap.top();
                maxHeap.pop();         
        }
        return w;
    }
};
