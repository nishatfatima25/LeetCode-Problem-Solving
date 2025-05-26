// LeetCode Problem : 118. Pascal's Triangle
// Link : https://leetcode.com/problems/pascals-triangle/description/


//method1
class Solution {
public:

    vector<int> generateRows(int row){
        int ans = 1;
        vector<int> ansRow;
        ansRow.push_back(ans);

        for(int col = 1; col< row;col++){
            ans = ans * (row-col);
            ans = ans/col;
            ansRow.push_back(ans);
        }

        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;

        for(int i=1; i<=numRows; i++){
            res.push_back(generateRows(i));
        }

        return res;
    }
};

//method2
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = result[i - 1][j - 1] + result[i - 1][j];
            }
            result.push_back(row);
        }
        return result;
    }
};


