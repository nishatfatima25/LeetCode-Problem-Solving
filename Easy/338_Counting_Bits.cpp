// LeetCode Problem : 338. Counting Bits
// Link : https://leetcode.com/problems/counting-bits/description/

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans(n+1,0);

        for(int i=0; i<=n; i++){
            ans[i] = ans[i>>1] + (i&1);
        }

        return ans;
    }
};
