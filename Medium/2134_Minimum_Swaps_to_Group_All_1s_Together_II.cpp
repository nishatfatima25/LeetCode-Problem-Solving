// LeetCode Problem : 2134. Minimum Swaps to Group All 1's Together II
// Link : https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/description/

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int k =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1) k++;
        }

        vector<int> arr = nums;
        arr.insert(arr.end(),nums.begin(),nums.end());

        int ones = 0, maxi = 0;
        for(int i=0; i<arr.size(); i++){
            ones += arr[i];
            if(i >=k){
                ones -= arr[i-k];
            }
            maxi = max(maxi,ones);
        }
        return k-maxi;
    }
};
