// LeetCode Problem : 1313. Decompress Run-Length Encoded List
// Link : https://leetcode.com/problems/decompress-run-length-encoded-list/description/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        int left = 0;
        int right = 1;

        while(left<n && right < n){
            for(int i=0; i<nums[left]; i++){
                ans.push_back(nums[right]);
            }

            left = left+2;
            right = right + 2;
        }

        return ans;
    }

};
