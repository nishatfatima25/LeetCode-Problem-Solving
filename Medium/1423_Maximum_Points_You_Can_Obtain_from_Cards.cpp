// LeetCode Problem: 1423. Maximum Points You Can Obtain from Cards
// Link : https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int num = cardPoints.size();

        int leftSum = 0;
        int rightSum = 0;
        int maxSum = 0;

        //take the left sum till k
        for(int i =0; i<=k-1; i++){
            leftSum = leftSum + cardPoints[i];
            maxSum = leftSum;  //initially maxSum is leftSum
        }

        //shrink down the window from left and inc on the right side(r to l)
        int rightIndex = num-1;
        for(int i = k-1; i>=0; i--){
            leftSum = leftSum - cardPoints[i];
            rightSum = rightSum + cardPoints[rightIndex];
            rightIndex--;

            maxSum = max(maxSum, leftSum+rightSum);
        }

        return maxSum;
    }
};
