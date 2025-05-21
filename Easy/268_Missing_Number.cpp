// LeetCode Problem : 268. Missing Number
// Link : https://leetcode.com/problems/missing-number/description/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumShouldBe = n*(n+1) /2;
        int sumIs = 0;
        for(int i=0; i<n; i++){
            sumIs += nums[i];
        }
        int ans = sumShouldBe - sumIs;
        return ans;
    }
};
