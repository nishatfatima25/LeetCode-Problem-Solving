// LeetCode Problem: 13. Roman to Integer
// Link: https://leetcode.com/problems/roman-to-integer/

class Solution {
public:

    int getChar(char ch){
        if(ch=='I') return 1;
        if(ch=='V') return 5;
        if(ch=='X') return 10;
        if(ch=='L') return 50;
        if(ch=='C') return 100;
        if(ch=='D') return 500;
        if(ch=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int sum=0;
        int n = s.size();
        int next,now;
        for(int i=0; i<n; i++){
            now = getChar(s[i]);
            if(i<n-1){
                next = getChar(s[i+1]);
            }
            else{
                next =0;
            }

            if(now<next){
                sum+= next-now;
                i++;  //next char ko skip karega
            }
            else{
                sum+=now;
            }
        }
        return sum;
    }
};
