// LeetCode Problem : 367. Valid Perfect Square
// Link : https://leetcode.com/problems/valid-perfect-square/description/

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        int left =0;
        int right = (num/2) + 1;
        long mid;

        while(left <= right){
            mid = (left+right)/2;

            if(mid*mid == num){
                return true;
            }
            else if(mid * mid > num){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        return false;
    }
};
