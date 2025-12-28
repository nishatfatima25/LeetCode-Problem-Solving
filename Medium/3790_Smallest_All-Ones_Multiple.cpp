// LeetCode Problem : 3790. Smallest All - Ones Multiple
// Link : https://leetcode.com/problems/smallest-all-ones-multiple/description/

class Solution {
public:
    int minAllOneMultiple(int k) {
        
        if(k%2==0 || k%5==0) return -1;

        int ans = 0;
        for(int i=1; i<=k; i++){
            ans = (ans*10 + 1)%k;

            if(ans ==0) return i;
        }

        return -1;

    }
};

