// LeetCode Problem : 3760. Maximum Substrings With Distinct Start
// Link : https://leetcode.com/problems/maximum-substrings-with-distinct-start/description/

class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> st(s.begin(),s.end());
        int n = st.size();

        return n;
    }
};
