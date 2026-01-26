// LeetCode Problem : 3819. Rotate Non Negative Elements 
// Link : https://leetcode.com/problems/rotate-non-negative-elements/

class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        
        vector<int> position;
        for(int x : nums){
            if(x>=0) position.push_back(x);
        }

        int m = position.size();
        if(m==0 || m==1) return nums;

        k = k%m;

        rotate(position.begin(), position.begin()+k,position.end());
        int idx = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >=0) nums[i] = position[idx++];
        }

        return nums;
    }
};
