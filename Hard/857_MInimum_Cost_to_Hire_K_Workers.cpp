// LeetCode Problem : 857. Minimum Cost to Hire K Workers
// Link : https://leetcode.com/problems/minimum-cost-to-hire-k-workers/description/

class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double,int>> arr;
        for(int i=0; i<quality.size(); i++){
            double ratio = (double)wage[i]/quality[i];
            arr.push_back({ratio,quality[i]});
        }
        sort(arr.begin(),arr.end());
        double sum = 0;
        double ans = DBL_MAX;
        priority_queue<int> maxHeap;

        for(auto it : arr){
            double ratio = it.first;
            int quality = it.second;

            sum += quality;
            maxHeap.push(quality);

            if(maxHeap.size() > k){
                sum -= maxHeap.top();
                maxHeap.pop();
            }
            if(maxHeap.size() == k) ans = min(ans,sum*ratio);
        }

        return ans;
    }
};
