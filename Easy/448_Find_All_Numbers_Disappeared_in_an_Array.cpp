// LeetCode Problem : 448. Find All Numbers Disappeared in an Array
// Link : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int size = nums.size();
        vector<int> ans;
        unordered_map<int,int> hash;

        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }

        for(int i=1; i<=size; i++){
            if(hash[i] == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};
