// LeetCode Problem : 507. Perfect Number
// Link : https://leetcode.com/problems/perfect-number/description/

class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1; i<num; i++){
            if(num%i==0){
                sum = sum + i;
            }
        }
        if(sum==num){
            return true;
        }
        else{
            return false;
        }
    }
};
