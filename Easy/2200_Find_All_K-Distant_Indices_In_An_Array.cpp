// LeetCode Problem : 2200. Find All K- Distant Indices in an Array
// Link : https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/description/

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        int x =0;
        int n = nums.size();

        for(int i =0; i<n; i++){
            if(nums[i] == key){
                int l = max(x, i-k);
                x = min(n-1, i+k) + 1;
                for(int j = l; j<x; j++){
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};
