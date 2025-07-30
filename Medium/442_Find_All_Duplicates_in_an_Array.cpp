// LeetCode Problem : 442. Find All Duplicates in an Array
// Link : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]){
                if(ans.empty() || ans.back() != nums[i]){
                    ans.push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};
