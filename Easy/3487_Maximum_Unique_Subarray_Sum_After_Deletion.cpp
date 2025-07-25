// LeetCode Problem : 3487. Maximum Unique Subarray Sum After Deletion
// Link : https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion/description/

class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum =0;
        unordered_set<int> st;

        int maxi = INT_MIN;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] > 0){
                st.insert(nums[i]);
            }
            else{
                maxi = max(maxi, nums[i]);
            }
        }

        for(auto x : st){
            sum += x;
        }

        if(st.size()){
            return sum;
        }
        else{
            return maxi;
        }
    }
};
