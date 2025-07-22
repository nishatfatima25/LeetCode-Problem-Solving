// LeetCode Problem : 1695. Maximum Erasure Value
// Link : https://leetcode.com/problems/maximum-erasure-value/description/

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;
        int left =0;
        int sum =0;
        int maxSum=0;

        for(int i=0; i<nums.size(); i++){
            while(st.count(nums[i])){
                st.erase(nums[left]);
                sum -= nums[left];
                left++;
            }

            st.insert(nums[i]);
            sum += nums[i];

            maxSum = max(maxSum,sum);
        }

        return maxSum;
    }
};
