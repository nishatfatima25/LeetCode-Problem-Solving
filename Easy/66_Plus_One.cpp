// LeetCode Problem : 66 Plus One
// Link : https://leetcode.com/problems/plus-one/description/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        digits[n-1] = digits[n-1] + 1;

        for(int i=n-1; i>0; i--){
            //for 9
            if(digits[i]==10){
                digits[i]=0;
                digits[i-1] = digits[i-1] + 1;
            }
        }
        //for cases like 999
        if(digits[0]==10){
            digits[0] =0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
