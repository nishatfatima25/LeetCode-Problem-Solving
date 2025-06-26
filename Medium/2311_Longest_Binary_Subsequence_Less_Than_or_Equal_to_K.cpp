// LeetCode Problem : 2311. Longest Binary Subsequence Less Than or Equal to K
// Link : https://leetcode.com/problems/longest-binary-subsequence-less-than-or-equal-to-k/description/

class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n = s.size();
        int zero = 0;
        int one =0;
        int x =0;
        long p = 1;

        for(char ch : s){
            if(ch == '0'){
                zero++;
            }
        }

        for(int i = n-1; i>=0; i--){
            if(s[i] == '1'){
                if(x+p >k){
                    continue;
                }
                x = x+p;
                one++;
            }
            p <<= 1;
            if(p > k){
                break;
            }
        }

        int ans = zero + one;

        return ans;
    }
};
