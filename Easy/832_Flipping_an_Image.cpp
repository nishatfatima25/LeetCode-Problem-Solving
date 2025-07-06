// LeetCode Problem : 832. Flipping an Image
// Link : https://leetcode.com/problems/flipping-an-image/description/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        //n-row
        for(auto &n : image){
            reverse(n.begin(), n.end());
        }

        for(int i=0; i<image.size(); i++){
            for(int j=0; j<image[i].size(); j++){
                if(image[i][j] == 1){
                    image[i][j] = 0;
                }
                else{
                    image[i][j] = 1;
                }
            }
        }

        return image;
    }
};
