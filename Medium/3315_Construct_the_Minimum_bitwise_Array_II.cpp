// LeetCode Problem : 3315. Construct the Minimum Bitwise Array II
// Link : https://leetcode.com/problems/construct-the-minimum-bitwise-array-ii/description/

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);

        for(int i=0; i<n; i++){
            int curr = nums[i];

            if(curr == 2){
                ans[i] = -1;
                continue;
            }

            int temp = curr;
            int count =0;

            while((temp & 1) == 1){
                count++;
                temp >>= 1;
            }

            ans[i] = curr - (1 << (count-1));
        }

        return ans;
    }
};
