// LeetCode Problem : 746. Min Cost Climbing Stairs
// Link : https://leetcode.com/problems/min-cost-climbing-stairs/description/

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        for(int i=2; i<n; i++){
            cost[i] += min(cost[i-1],cost[i-2]);
        }

        int ans = min(cost[n-1],cost[n-2]);
        return ans;
    }
};
