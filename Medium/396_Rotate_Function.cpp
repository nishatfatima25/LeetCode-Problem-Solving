// LeetCode Problem : 396. Rotate Function
// Link : https://leetcode.com/problems/rotate-function/description/

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long n = nums.size();
        long long sum = 0;
        long long curr = 0;

        for(int i=0; i<n; i++){
            sum += nums[i];
            curr += (long long)i * nums[i];
        }

        long long maxi = curr;
        for(int i=n-1; i>0; i--){
            curr = curr + sum - (n*nums[i]);
            maxi = max(maxi,curr);
        }

        return (int)maxi;
    }
};
