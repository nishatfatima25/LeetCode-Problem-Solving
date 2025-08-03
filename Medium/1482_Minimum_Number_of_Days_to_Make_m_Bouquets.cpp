// LeetCode Problem : 1482. Minimum Number of Days to Make m Bouquets
// Link : https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/

class Solution {
public:

    bool isPossible(vector<int>& bloomDay, int day, int m, int k){
        int count=0;
        int noOfBouquets = 0;

        for(int i=0; i<bloomDay.size(); i++){
            //if the val at i is less than the curr day then it has been bloomed
            //so inc the counter

            if(bloomDay[i] <= day){
                count++;
            }

            //otherwise the chain is broken so we'll count upto that
            else{
                noOfBouquets += (count/k);
                //reset counter
                count=0;
            }
        }

        noOfBouquets += count/k;

        return noOfBouquets >=m;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        long long val = m * 1ll * k * 1ll;
        if(val > n) return -1;

        int mini = INT_MAX, maxi = INT_MIN;

        for(int i=0; i<n; i++){
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int low = mini;
        int high = maxi;

        while(low<=high){
            int mid = (low+high)/2;

            if(isPossible(bloomDay,mid,m,k)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return low;
    }
};
