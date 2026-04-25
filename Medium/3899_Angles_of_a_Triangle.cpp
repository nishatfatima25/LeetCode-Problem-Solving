// LeetCode Problem : 3899. Angles of a Triangle
// Link : https://leetcode.com/problems/angles-of-a-triangle/description/

class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        sort(sides.begin(),sides.end());
        double a = sides[0], b = sides[1], c = sides[2];

        if(a+b <= c) return {};

        double s = (a+b+c)/2.0;
        double area = s*(s-a)*(s-b)*(s-c);
        area = sqrt(area);

        double pi = acos(-1.0);
        vector<double> angle(3);

        angle[0] = asin((2.0*area) / (b*c))*180/pi;
        angle[1] = asin((2.0*area) / (a*c))*180/pi;
        angle[2] = 180.0 - angle[0] - angle[1];

        return angle;
    }
};
