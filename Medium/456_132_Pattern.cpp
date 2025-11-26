// LeetCode Problem : 456. 132 Pattern
// Link : https://leetcode.com/problems/132-pattern/description/

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        stack<pair<int,int>> st;
        int mini = nums[0];

        for(int i =1; i<nums.size(); i++){
            int x = nums[i];

            while(!st.empty() && x >= st.top().first) st.pop();

            if(!st.empty() && x>st.top().second) return true;

            st.push({x,mini});
            mini = min(mini,x);
        }

        return false;
    }
};
