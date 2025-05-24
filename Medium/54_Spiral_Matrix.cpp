// LeetCode Problem : 54. Spiral Matrix
// Link : https://leetcode.com/problems/spiral-matrix/description/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int top=0, right = col-1;
        int left =0, bottom = row-1;
        vector<int> ans;

        while(top<=bottom && left<=right){
        //1st loop from left to right
        for(int i=left; i<=right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        //2nd loop from top to bottom
        for(int i = top; i<=bottom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        if(top<=bottom){
             //3rd loop from right to left
                for(int i=right; i>=left; i--){
                ans.push_back(matrix[bottom][i]);
        }
                bottom--;
        }
       
        if(left<=right){
                //4th loop from bottom to top
                for(int i=bottom; i>=top; i--){
                ans.push_back(matrix[i][left]);
        }
                left++;
        }  
    }
    return ans;
}
};
