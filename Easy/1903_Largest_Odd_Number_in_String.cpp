// LeetCode Problem : 1903. Largest Odd Number in String
// Link : https://leetcode.com/problems/largest-odd-number-in-string/description/

class Solution {
public:
    string largestOddNumber(string num) {
        
        string result = "";
        int size = num.size();

        for(int i=size-1; i>=0; i--){

            char ch = num[i];
            if(ch%2 != 0){
                return num.substr(0, i+1);
            }
        }

        return "";
    }
};
