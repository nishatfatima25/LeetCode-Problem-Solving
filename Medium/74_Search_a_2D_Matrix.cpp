// LeetCode Problem : 74. Search a 2D Matrix
// Link : https://leetcode.com/problems/search-a-2d-matrix/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        int total = rows*cols;

        int low = 0;
        int high = total-1;

        while(low<=high){
            int mid = (low+high)/2;

            int row = mid/cols;
            int col = mid%cols;

            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] < target) low = mid+1;
            else high =  mid-1 ;
        }        

        return false;
    }
};
