// LeetCode Problem : 1365. How Many Numbers Are Smaller Than the Current Number
// Link : https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        unordered_map<int,int> mpp;

        for(int i=0; i<sorted.size(); i++){
           if(mpp.find(sorted[i]) == mpp.end()){
                mpp[sorted[i]] = i;
           }
        }

        for(int i : nums){
            ans.push_back(mpp[i]);
        }

        return ans;
    }
};
