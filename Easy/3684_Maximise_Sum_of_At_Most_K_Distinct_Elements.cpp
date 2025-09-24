// LeetCode Problem : 3684. Maximise Sum of At Most K Distinct Elements
// Link : https://leetcode.com/problems/maximize-sum-of-at-most-k-distinct-elements/

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> st;

        for (auto& it : nums)
            st.insert(it);

        vector<int> diff;
        for (auto& it : st)
            diff.push_back(it);

        sort(diff.begin(), diff.end(), greater<int>());

        vector<int> ans;
        for (int i = 0; i < k && i < diff.size(); i++) {
            ans.push_back(diff[i]);
        }

        return ans;
    }
};
