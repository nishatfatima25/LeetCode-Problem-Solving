// LeetCode Problem : 219. Contains Dupliacte II
// Link : https://leetcode.com/problems/contains-duplicate-ii/description/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;

        for(int i=0; i<nums.size(); i++){
            if(window.count(nums[i])){
                return true;
            }
            window.insert(nums[i]);
             if(window.size()>k){
            window.erase(nums[i-k]);
        }
        }
        
       
        return false;
    }
};
