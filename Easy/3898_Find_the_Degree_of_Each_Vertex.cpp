// LeetCode Problem : 3898. Find the Degree of Each Vertex
// Link : https://leetcode.com/problems/find-the-degree-of-each-vertex/description/

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            ans[i] = accumulate(matrix[i].begin(),matrix[i].end(),0);
        }
        return ans;
    }
};
