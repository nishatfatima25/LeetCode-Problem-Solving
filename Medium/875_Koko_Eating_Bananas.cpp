// LeetCode Problem : 875. Koko Eating Bananas
// Link : https://leetcode.com/problems/koko-eating-bananas/description/

class Solution {
public:

    //find the max val
    int maxVal(vector<int>& piles){
        int maxi = INT_MIN;

        for(int i=0; i<piles.size(); i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    // total hours taken
    long long hoursTaken(vector<int>& piles, int hour){
        long long total = 0;

        for(int i=0; i<piles.size(); i++){
            total += ceil((double)(piles[i]) / (double)(hour));

        }

        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxVal(piles);

        while(low <= high){
            int mid = (low+high)/2;

            long long hr = hoursTaken(piles, mid);

            // then search for the min num in left search space
            if(hr<=h){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return low;
    }
};
