// LeetCode Problem : 3908. Valid Digit Number
// Link : https://leetcode.com/problems/valid-digit-number/description/

class Solution {
public:
    bool validDigit(int n, int x) {
        string num = to_string(n);
        char X = x+'0';

        if(num[0] == X) return false;
        for(int i=1; i<num.size(); i++){
            if(num[i] == X){
                return true;
                break;
            }
        }

        return false;
    }
};
