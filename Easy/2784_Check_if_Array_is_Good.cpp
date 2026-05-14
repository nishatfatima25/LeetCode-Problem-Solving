// LeetCode Problem : 2784. Check if Array is Good
// Link : https://leetcode.com/problems/check-if-array-is-good/description/

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        set<int> st(nums.begin(),nums.end());

        int maxi = *max_element(nums.begin(),nums.end());
        int n = nums.size();
        n = n-1;

        int val = (n*(n+1))/2;
        val += n;

        return sum == val && st.size() == n && maxi == n;
    }
};
