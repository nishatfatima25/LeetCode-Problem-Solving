// LeetCode Problem : 3912. Valid Elements in an Array
// Link : https://leetcode.com/problems/valid-elements-in-an-array/description/

class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return {};
        if(n==1) return {nums[0]};

        vector<int> right(n);
        right[n-1] = -1;
        for(int i=n-2; i>=0; i--){
            right[i] = max(right[i+1], nums[i+1]);
        }

        vector<int> ans;
        int left = -1;

        for(int i=0; i<n; i++){
            if(i==0 || i == n-1) ans.push_back(nums[i]);
            else if(nums[i] > left || nums[i] > right[i]) ans.push_back(nums[i]);
            left = max(left,nums[i]);
        }
        return ans;
    }
};
