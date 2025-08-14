// LeetCode Problem : 2643. Row With Maximum Ones
// Link : https://leetcode.com/problems/row-with-maximum-ones/description/

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        int row = mat.size();
        int col = mat[0].size();

        int countMax = 0;
        int indexVal = 0;

        for(int i=0; i<row; i++){
            int countOnes = 0;

            for(int j =0; j<col; j++){
                if(mat[i][j] == 1){
                    countOnes++;
                }

                if(countOnes > countMax){
                    countMax = countOnes;
                    indexVal = i;
                }
            }
        }

        return {indexVal, countMax};
    }
};
