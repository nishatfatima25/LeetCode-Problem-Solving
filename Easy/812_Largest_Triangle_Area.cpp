// LeetCode Problem : 812. Largest Triangle Area
// Link : https://leetcode.com/problems/largest-triangle-area/description/

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxi = 0.0;
        int size = points.size();

        for(int i=0; i<size; i++){
            for(int j = i+1; j<size; j++){
                for(int k = j+1; k<size; k++){
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];

                    double area = 0.5 * abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));

                    maxi = max(maxi,area); 
                }
            }
        }

        return maxi;
    }
};
