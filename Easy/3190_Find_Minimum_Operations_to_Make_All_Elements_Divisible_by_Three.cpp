// LeetCode Problem : 3190. Find Minimum Operations to Make All Elements Divisible by Three
// Link : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(((nums[i] + 1) %3 == 0 ) || ((nums[i] - 1)%3 == 0)){
                count++;
            }
        }

        return count;
    }
};
