// LeetCode Problem : 1486. XOR Operation in an Array
// Link : https://leetcode.com/problems/xor-operation-in-an-array/description/

class Solution {
public:
    int xorOperation(int n, int start) {
        
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            nums[i] = start + 2*i;
        }

        int Xor=0;
        for(int it : nums){
            Xor = Xor ^ it;
        }

        return Xor;
    }
};
