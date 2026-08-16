// LeetCode Problem : 2498. Frog Jump II
// Link : https://leetcode.com/problems/frog-jump-ii/description/

class Solution {
public:
    int maxJump(vector<int>& stones) {
        int n = stones.size();
        if(n==2) return stones[1] - stones[0];

        int maxi = 0;
        for(int i=2; i<n; i++) maxi = max(maxi,stones[i]-stones[i-2]);

        return maxi;
    }
};
