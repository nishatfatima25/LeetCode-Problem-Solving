// LeetCode Problem : 1470. Shuffle the Array
// Link : https://leetcode.com/problems/shuffle-the-array/description/

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int x = 0;

        for(int i=0; i<n; i++){
            ans.push_back(nums[x]);
            ans.push_back(nums[x+n]);
            x++;
        }

        return ans;
    }
};
