// LeetCode Problem : 826. Most Profit Assigning Work
// Link : https://leetcode.com/problems/most-profit-assigning-work/description/

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<vector<int>> arr;
        for(int i=0; i<difficulty.size(); i++) arr.push_back({difficulty[i],profit[i]});
        sort(arr.begin(),arr.end());
        sort(worker.begin(),worker.end());

        int ans =0, maxi = 0,j=0;
        for(int i=0; i<worker.size(); i++){
            while(j< arr.size() && arr[j][0] <= worker[i]){
                maxi = max(maxi,arr[j][1]);
                j++;
            }
            ans += maxi;
        }

        return ans;
    }
};
