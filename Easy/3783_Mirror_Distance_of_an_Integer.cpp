// LeetCode Problem : 3783. Mirror Distance of an Integer
// Link : https://leetcode.com/problems/mirror-distance-of-an-integer/description/

class Solution {
public:
    int mirrorDistance(int n) {
        string rev = to_string(n);
        reverse(rev.begin(), rev.end());

        int revNum = stoi(rev);

        return abs(revNum- n);
    }
};
