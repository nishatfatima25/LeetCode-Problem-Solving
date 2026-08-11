// LeetCode Problem : 2996. Smallest Missing Integer Greater Than Sequential Prefix Sum
// Link : https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/description/

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int sum = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]+1) sum += nums[i];
            else break;
        }

        while(st.count(sum)) sum++;
        return sum;
    }
};
