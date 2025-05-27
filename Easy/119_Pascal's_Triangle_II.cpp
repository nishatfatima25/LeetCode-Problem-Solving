// LeetCode Problem : 119. Pascal's Triangle
// Link : https://leetcode.com/problems/pascals-triangle-ii/description/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(ans);

        for(int i=1; i<=rowIndex; i++){
            ans = ans * (rowIndex-i+1);
            ans = ans/i;
            ansRow.push_back(ans);
        }

        return ansRow;
    }
};
