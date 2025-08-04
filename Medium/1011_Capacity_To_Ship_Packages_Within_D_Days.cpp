// LeetCode Problem : 1011. Capacity To Ship Packages Within D Days
// Link : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

class Solution {
public:

    int noOfDays(vector<int> &weights, int capacity){
        int load =0;
        int day =1;
        
        for(int i=0; i<weights.size(); i++){
            if(load + weights[i] > capacity){
                day = day +1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);

        while(low<=high){
            int mid = (low+high)/2;

            int ReqDays = noOfDays(weights,mid);

            if(ReqDays <= days) high = mid-1;
            else low = mid+1;
        }

        return low;
    }
};
