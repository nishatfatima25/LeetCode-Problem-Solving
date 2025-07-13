// LeetCode Problem : 1266. Minimum Time Visiting All Points
// Link : https://leetcode.com/problems/minimum-time-visiting-all-points/description/

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 0;

        for(int i=0; i<n-1; i++){
            int x = points[i][0];
            int y = points[i][1];

            int X = points[i+1][0];
            int Y = points[i+1][1];

            ans = ans + max(abs(X-x), abs(Y-y));
        }

        return ans;
    }
};
