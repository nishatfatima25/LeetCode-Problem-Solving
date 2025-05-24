// LeetCode Problem : 73. Set Matrix Zeroes
// Link : https://leetcode.com/problems/set-matrix-zeroes/description/

// Method-1 : Brute force
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // Brute force 

        int n = matrix.size();
        int m = matrix[0].size();
        //make separate row and col matrix

        vector<int> row(n,0);
        vector<int> col(m,0);


        //find 0 and mark row,col as 1
        for(int i=0; i<n; i++){
            for(int j =0; j<m; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        //now do re iteration to mark remaining elements row corresponding row and col as 0
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){

                //if row and col of that element are marked then make it 0
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }

       
    }
};

//Method-2 : Optimal
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //optimal approach
        int n = matrix.size();
        int m = matrix[0].size();

        int col0 = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){

                    //mark ith row
                    matrix[i][0] = 0;

                    //mark jth col
                    if(j!=0){
                        matrix[0][j] = 0;
                    }
                    else{
                        col0 = 0;
                    }
                }
            }
        }    

        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(matrix[i][j] !=0){
                    //check for row and col
                    if(matrix[0][j] ==0 || matrix[i][0]==0){
                        matrix[i][j]  = 0;
                    }
                }
            }
        }

        if(matrix[0][0] ==0){
            for(int j=0; j<m; j++) matrix[0][j] = 0;
        }

        if(col0 ==0){
            for(int i=0; i<n; i++) matrix[i][0] = 0;
        }
    }

};
