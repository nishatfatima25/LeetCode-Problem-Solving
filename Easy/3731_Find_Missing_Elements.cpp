// LeetCode Problem : 3731. Find Missing Elements
// Link : https://leetcode.com/problems/find-missing-elements/description/

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());;

        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> ans;
        for(int i= mini; i<=maxi; i++){
            if(st.find(i) == st.end()) ans.push_back(i);
        }

        return ans;
    }
};
