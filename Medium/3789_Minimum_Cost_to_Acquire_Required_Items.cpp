// LeetCode Problem : 3789. Minimum Cost to Acquire Required Items
// Link : https://leetcode.com/problems/minimum-cost-to-acquire-required-items/description/

class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        
        costBoth = min(costBoth, cost1+cost2);

        if(need1>need2){
            swap(need1,need2);
            swap(cost1,cost2);
        }

        if(cost2>costBoth) cost2 = costBoth;

        return 1LL*costBoth * need1 + 1LL*cost2* (need2-need1);

       
    }
};
