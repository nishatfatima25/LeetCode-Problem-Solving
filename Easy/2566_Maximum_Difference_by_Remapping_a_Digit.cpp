// LeetCode Problem : 2566. Maximum Difference by Remapping a Digit
// Link : https://leetcode.com/problems/maximum-difference-by-remapping-a-digit/description/

class Solution {
public:
    int minMaxDifference(int num) {
       string st = to_string(num);

       char ch = 0;
       for(char x : st){
        if(x != '9'){
            ch = x;
            break;
        }
       } 

       string maxSt;
       if(ch){
        for(char x : st){
            maxSt.push_back(x == ch ? '9' : x);
        }
       }
       else{
        maxSt = st;
       }

       char min = st[0];
       string minSt;
       for(char x : st){
        minSt.push_back(x == min ? '0' : x);
       }

        int ans = stoi(maxSt) - stoi(minSt);
        return ans;
    }
};
