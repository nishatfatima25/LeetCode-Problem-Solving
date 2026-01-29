// LeetCode Problem : 413. Arithmetic Slices
// Link : https://leetcode.com/problems/arithmetic-slices/description/

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n = nums.size();
        int count=0;
        int ans =0;

        for(int i=2; i<n; i++){
            int diff1 = nums[i]-nums[i-1];
            int diff2 = nums[i-1]-nums[i-2];

            if(diff1 == diff2){
                count++;
                ans += count;
            }
            else count =0;
        }
        
        return ans;
    }
};
