// LeetCode Problem : 128. Longest Consecutive Sequence
// Link : https://leetcode.com/problems/longest-consecutive-sequence/description/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st(nums.begin(),nums.end());
        int ans =0;

        for(auto it : st){
            if(st.find(it-1) == st.end()){
                int len = 1;
                while(st.find(it+len) != st.end()) len++;
                ans = max(ans,len);
            } 
        }

        return ans;
    }
};
