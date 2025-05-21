// LeetCode Problem : 415: Add Strings
// Link : https://leetcode.com/problems/add-strings/description/

class Solution {
public:


    string addition(string num1, string num2){
        int index1 = num1.length()-1;
        int index2 = num2.length()-1;
        int carry=0,sum;
        string ans;
        char ch;

        while(index2>=0){
            sum = (num1[index1] - '0') + (num2[index2] - '0') + carry;
            carry = sum/10;
            ch = '0'+ sum%10;
            ans = ans +ch;
            index2--;
            index1--;
        }
        while(index1>=0){
            sum = num1[index1]-'0'+ carry;
            carry = sum/10;
            ch = sum%10 + '0';
            ans = ans +ch;
            index1--;
        }
        if(carry){
            ans = ans + '1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

    string addStrings(string num1, string num2) {
        
        if(num2.length()>num1.length()){
            return addition(num2,num1);
        }
        else{
            return addition(num1,num2);
        }
    }
};
