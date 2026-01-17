// LeetCode Problem : 190. Reverse Bits
// Link : https://leetcode.com/problems/reverse-bits/description/

class Solution {
public:
    int reverseBits(int n) {
        
        string s = "";

        for(int i=31; i>=0; i--){
            int bit = (n>>i) & 1;
            if(bit == 1) s+= '1';
            else s+= '0';
        }

        long long ans=0;
        long long x = 1;

        for(int i=0; i<=31; i++){
            if(s[i] == '1') ans += x;
            x = x*2;
        }

        return ans;

    }
};
