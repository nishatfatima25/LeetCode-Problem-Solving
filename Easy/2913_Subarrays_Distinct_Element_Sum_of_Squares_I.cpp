// LeetCode Problem : 2913. Subarrays Distinct Element Sum of Squares I
// Link : https://leetcode.com/problems/subarrays-distinct-element-sum-of-squares-i/description/

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        
        int ans = 0;
        for(int i=0; i<nums.size(); i++){

            unordered_set<int> st;
            for(int j=i; j<nums.size(); j++){
                st.insert(nums[j]);
                ans += st.size() * st.size();
            }
        }

        return ans;
    }
};
