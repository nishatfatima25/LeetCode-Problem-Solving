// LeetCode Problem : 645. Set Mismatch
// Link : https://leetcode.com/problems/set-mismatch/description/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                v.push_back(nums[i]);
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i] != i+1){
                if(i+1 < nums.size() && nums[i+1] != i+1){
                v.push_back(i+1);
                return v;
                }
            }
        }
        v.push_back(nums.size());
        return v;
    }
};
