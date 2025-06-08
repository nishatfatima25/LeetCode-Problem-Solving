// LeetCode Problem : 350. Intersection of Two Arrays II
// Link : https://leetcode.com/problems/intersection-of-two-arrays-ii/description/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> mpp;
        vector<int> ans;

        for(int x : nums1){
            mpp[x]++;
        }

        for(int y : nums2){
            if(mpp[y] > 0){
                ans.push_back(y);
                mpp[y]--;
            }
        }

        return ans;
    }
};
