// LeetCode Problem : 3443. Maximum Manhattan Distance After K Changes
// Link : https://leetcode.com/problems/maximum-manhattan-distance-after-k-changes/description/

class Solution {
public:
    int maxDistance(string s, int k) {
        int result = 0;
        int n =0, S=0, e=0, w= 0;

        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(ch == 'N') n++;
            else if(ch == 'S') S++;
            else if(ch == 'E') e++;
            else if(ch == 'W') w++;

            int x = abs(n-S);
            int y = abs(e-w);
            int m = x+y;
            int distance = m + min(2*k, i+1-m);

            result = max(result, distance);
        }

        return result;
    }

};
