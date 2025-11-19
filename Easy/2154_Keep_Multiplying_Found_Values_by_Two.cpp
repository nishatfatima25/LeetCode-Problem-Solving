// LeetCode Problem : 2154. Keep Multiplying Found Values by Two
// Link : https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_set st(nums.begin(), nums.end());

        for(auto it : st){
            if(st.find(original) != st.end()){
                original = 2*original;
            }      
        }

        return original;
    }
};
