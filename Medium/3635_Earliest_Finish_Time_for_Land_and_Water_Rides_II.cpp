// LeetCode Problem : 3635. Earliest Finish Time for Land and Water Rides II
// Link : https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/description/

class Solution {
public:

    int FinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int mini = INT_MAX;
        int ans = INT_MAX;

        for(int i=0; i<landStartTime.size(); i++) mini = min(mini,landStartTime[i]+landDuration[i]);

        for(int i=0; i<waterStartTime.size(); i++){
            int fin = max(mini,waterStartTime[i]) + waterDuration[i];
            ans = min(fin,ans);
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int lf = FinishTime(landStartTime,landDuration,waterStartTime,waterDuration);
        int wf = FinishTime(waterStartTime,waterDuration,landStartTime,landDuration);

        return min(lf,wf);
    }
};
