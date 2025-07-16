// LeetCode Problem : 3201. Find the Maximum Length of Valid Subsequence I
// Link : https://leetcode.com/problems/find-the-maximum-length-of-valid-subsequence-i/description/

class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int even = 0 , odd = 0;
        int count = 0;
        bool ans = nums[0] % 2 == 1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 1){
                if(ans){
                    ans = !ans;
                    count++;
                }
                odd++;
            }
            else{
                if(!ans){
                    ans = !ans;
                    count++;
                }
                even++;
            }
        }

        int result = max({count,odd,even});
        return result;
    }
};
