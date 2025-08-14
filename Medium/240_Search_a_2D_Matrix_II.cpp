// LeetCode Problem : 240. Search a 2D Matrix II
// Link : https://leetcode.com/problems/search-a-2d-matrix-ii/description/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        int m = matrix[0].size();

        int row = 0;
        int col = m-1;

        while(row < n && col >=0){

            if(matrix[row][col] == target) return true;

            else if(matrix[row][col] < target) row++;

            else col--;
        }

        return false;
    }
};

// method -2 
// class Solution {
// public:
//     bool binarySearch(vector<int> arr, int target){
//         int size = arr.size();
//         int low = 0;
//         int high = size-1;

//         while(low <= high){
//             int mid = (low+high)/2;

//             if(arr[mid] == target) return true;
//             else if(arr[mid] < target) low = mid+1;
//             else high = mid-1;
//         }

//         return false;
//     }

//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int size = matrix.size();
        
//         for(int i=0; i<size; i++){
//             bool ans = binarySearch(matrix[i],target);
//             if(ans) return true;
//         }

//         return false;
//     }
// };
