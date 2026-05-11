// LeetCode Problem : 2553. Separate the Digits in an Array
// Link : https://leetcode.com/problems/separate-the-digits-in-an-array/description/

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for(int i=0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            for(char ch : str) ans.push_back(ch-'0');
        }

        return ans;
    }
};
