// LeetCode Problem : 3903. Smallest Stable Index I
// Link : https://leetcode.com/problems/smallest-stable-index-i/description/

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int mini = INT_MAX;
        int maxi = 0, i=0;

        for(auto it = nums.begin(); it != nums.end(); it++){
            maxi = *max_element(nums.begin(),nums.begin()+i+1);
            mini = *min_element(nums.begin()+i,nums.end());

            if(maxi-mini <= k) return i;
            i++;
        }

        return -1;
    }
};
