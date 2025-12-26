// LeetCode Problem : 2483. Minimum Penalty for a Shop
// Link : https://leetcode.com/problems/minimum-penalty-for-a-shop/description/

class Solution {
public:
    int bestClosingTime(string customers) {
        
        int penalty =0;
        int minPenalty = penalty;
        int minIdx = 0;

        for(int i=1; i<= customers.size(); i++){
            int y = customers[i-1] == 'Y'? 1 : -1;

            penalty = penalty - y;
            if(minPenalty > penalty){
                minPenalty =  penalty;
                minIdx = i;
            }
        }

        return minIdx;
    }
};
