// LeetCode Problem : 3922. Minimum Flips to Make Binary String Coherent
// Link : https://leetcode.com/problems/minimum-flips-to-make-binary-string-coherent/description/

class Solution {
public:
    int minFlips(string s) {
       int n = s.size();
       int one = 0;

       for(int i=0; i<n; i++){
        if(s[i] == '1') one++;
       }

       int ans = n;
       ans = min(one,n-one);
       ans = min(ans,abs(one-1));

       if(n > 1){
        int val = 0;
        if(s[0] == '0') val++;
        if(s[n-1] == '0') val++;

        for(int i=1; i<n-1; i++){
            if(s[i] == '1') val++;
        }

        ans = min(ans,val);
       } 

       return ans;
    }
};
