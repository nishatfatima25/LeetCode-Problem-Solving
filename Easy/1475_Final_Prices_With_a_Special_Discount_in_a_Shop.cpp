// LeetCode problem : 1475. Final Prices With a Special Discount in a Shop
// Link : https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> answer(n);
        int disc=0;

        for(int i=0; i<n; i++){
            answer[i] = prices[i];
            for(int j=i+1; j<n;j++){
                if(j>i && prices[j] <= prices[i]){
                    answer[i] = prices[i] - prices[j];
                    break;
                }
                // else{
                //     answer[i] = prices[i] - disc;
                // }
            }
        }
        return answer;
        
    }
};
