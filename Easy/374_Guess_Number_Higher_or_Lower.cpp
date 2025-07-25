// LeetCode Problem : 374. Guess Number Higher or Lower
// Link : https://leetcode.com/problems/guess-number-higher-or-lower/description/


class Solution {
public:
    int guessNumber(int n) {
        int left =1;
        int right = n;

        while(left <= right){
            int mid = left + (right - left)/2;

            if(guess(mid) == 0){
                return mid;
            }
            else if(guess(mid) == 1){
                left = mid +1;
            }
            else{
                right = mid - 1;
            }
        }

        return 0;
    }
};
