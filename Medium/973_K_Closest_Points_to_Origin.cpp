// LeetCode Problem : 973. K Closest Points to Origin
// Link : https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> maxHeap;

        for(int i=0; i<points.size(); i++){
            int x = points[i][0];
            int y = points[i][1];
            int dist = pow(sqrt(x*x + y*y) , 2);

            maxHeap.push({dist,{x,y}});
            if(maxHeap.size() > k) maxHeap.pop();
        }

        vector<vector<int>> ans;
        while(!maxHeap.empty()){
            int x = maxHeap.top().second.first;
            int y = maxHeap.top().second.second;

            ans.push_back({x,y});
            maxHeap.pop();
        }

        return ans;
    }
};
