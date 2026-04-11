// LeetCode Problem : 790. Domino and Tromino Tiling
// Link : https://leetcode.com/problems/domino-and-tromino-tiling/description/

class Solution {
public:
    int mod = 1e9+7;
    vector<long long> dp;

    int func(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 5;

        if(dp[n] != -1) return dp[n];
        return dp[n] = (2*func(n-1)%mod + func(n-3)%mod) % mod;
    }

    int numTilings(int n) {
       dp.resize(n+1,-1);
       return func(n); 
    }
};
