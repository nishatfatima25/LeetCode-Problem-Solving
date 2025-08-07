// LeetCode Problem : 378. Kth Smallest Element in a Sorted Matrix
// Link : https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/description/

class Solution {
public:

    int count(vector<vector<int>>& matrix, int mid, int n){
        int count=0;
        int row = n-1;
        int col=0;

        while(row>=0 && col<n){
            if(matrix[row][col] <=mid){
                count += row+1;
                col++;
            }
            else{
                row--;
            }
        }
        return count;
    }

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n-1][n-1];

        while(low<high){
            int mid = low + (high - low) / 2;

            int cnt = count(matrix,mid,n);

            if(cnt >=k){
                high = mid;
            }
            else low = mid+1;
        }

        return low;
    }
};
