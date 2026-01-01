// LeetCode Problem : 398. Random Pick Index
// Link : https://leetcode.com/problems/random-pick-index/description/

class Solution {
public:

    unordered_map<int, vector<int>> mpp;

    Solution(vector<int>& nums) {

        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        int val = mpp[target].size();
        val = rand() % val;
        return mpp[target][val];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
