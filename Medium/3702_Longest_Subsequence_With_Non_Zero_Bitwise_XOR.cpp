// LeetCode Problem : 3702. Longest Subsequence With Non-Zero Bitwise XOR
// Link : https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/description/

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        
        int Xor = 0;
        bool zero = true;

        for(int i=0; i<nums.size(); i++){
            Xor = Xor ^ nums[i];

            if(nums[i] != 0) zero = false;
        }

        int ans;
        if(zero) ans =0;
        else if(Xor !=0) ans = nums.size();
        else ans = nums.size() - 1;

        return ans;
    }
};
