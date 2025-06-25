// LeetCode Problem : 455. Assign Cookies
// Link : https://leetcode.com/problems/assign-cookies/description/

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int x = g.size();
        int y = s.size();

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int left = 0, right = 0;

        while(left < y && right < x){
            if(g[right] <= s[left]){
                right++;
            }
            left++;
        }

        return right;
    }
};
