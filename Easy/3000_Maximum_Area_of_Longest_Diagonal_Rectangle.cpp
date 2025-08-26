// LeetCode Problem : 3000. Maximum Area of Longest Diagonal Rectangle
// Link : https://leetcode.com/problems/maximum-area-of-longest-diagonal-rectangle/description/

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
        int mxArea = 0;
        int mxDiag = 0;

        for(int i=0; i<dimensions.size(); i++){
            int len = dimensions[i][0];
            int width = dimensions[i][1];

            int diag = len*len + width*width;

            if(diag > mxDiag || (diag == mxDiag && len*width > mxArea)){
                mxArea = len*width;
                mxDiag = diag;
            }
        }

        return mxArea;
    }
};
