// LeetCode Problem : 3917. Count Indices With Opposite Parity
// Link : https://leetcode.com/problems/count-indices-with-opposite-parity/description/

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int countEven = 0, countOdd = 0;
        for(int i=n-1; i>=0; i--){
            if(nums[i] %2 == 0){
                ans[i] = countOdd;
                countEven++;
            }
            else{
                ans[i] = countEven;
                countOdd++;
            }
        }

        return ans;
    }
};
