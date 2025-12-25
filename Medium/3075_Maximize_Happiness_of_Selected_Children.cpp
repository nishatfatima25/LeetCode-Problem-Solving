// LeetCode Problem : 3075. Maximize Happiness of Selected Children
// Link : https://leetcode.com/problems/maximize-happiness-of-selected-children/description/

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        int n = happiness.size();
        long long  ans =0;

        sort(happiness.begin(), happiness.end());
        for(int i=0; i<k; i++){
            int value = happiness[n-1-i]-i;
            if(value > 0) ans += value;
        }

        return ans;
    }
};
