// LeetCode Problem : 496. Next Greater Element I
// Link : https://leetcode.com/problems/next-greater-element-i/description/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mpp;
        stack<int> st;

        for(int x : nums2){
            while(!st.empty() && st.top() < x){
                mpp[st.top()] = x;
                st.pop();
            }
            st.push(x);
        }

        while(!st.empty()){
            mpp[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        for(int x : nums1) ans.push_back(mpp[x]);

        return ans;
    }
};
