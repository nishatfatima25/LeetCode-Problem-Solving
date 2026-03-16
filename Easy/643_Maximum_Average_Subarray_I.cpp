// LeetCode Problem : 643. Maximum Average Subarray I
// Link : https://leetcode.com/problems/maximum-average-subarray-i/description/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double sum = 0;
        double ans = INT_MIN;
        double avg = 0.0;

        for(int i=0; i<k; i++) sum += nums[i];

        ans = sum;
        int j = 0;
        for(int i=k; i<nums.size(); i++){
            sum += nums[i];
            sum -= nums[j];
            j++;
            ans = max(ans,sum);
        }

        return ans/k;
    }
};
