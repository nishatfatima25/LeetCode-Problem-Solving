// LeetCode Problem : 3633. Earliest Finish Time for Land and Water Rides I
// Link : https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/description/

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int ans = INT_MAX;
        for(int i=0; i<landStartTime.size(); i++){
            for(int j=0; j<waterStartTime.size(); j++){
                int land = landStartTime[i] + landDuration[i];
                int lw =  max(land, waterStartTime[j]) + waterDuration[j];
                ans = min(ans,lw);

                int wt = waterStartTime[j] + waterDuration[j];
                int wl = max(wt, landStartTime[i]) + landDuration[i];
                ans = min(ans,wl);
            }
        }

        return ans;
    }
};
