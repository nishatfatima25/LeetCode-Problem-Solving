// LeetCode Problem : 2520. Count the Digits That Divide a Number
// Link : https://leetcode.com/problems/count-the-digits-that-divide-a-number/description/

class Solution {
public:
    int countDigits(int num) {
        int org = num;
        int count=0;

        while(num >0){
            int rem = num%10;
            if(org % rem == 0) count++;
            num /= 10;
        }

        return count;
    }
};
