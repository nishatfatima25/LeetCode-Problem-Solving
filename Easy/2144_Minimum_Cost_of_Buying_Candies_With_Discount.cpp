// LeetCode Profile : 2144. Minimum Cost of Buying Candies With Discount
// Link : https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/description/

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int sum = 0;

        for(int i=0; i<cost.size(); i++){
            if((i+1)%3 == 0) continue;
            sum += cost[i];
        }

        return sum;
    }
};
