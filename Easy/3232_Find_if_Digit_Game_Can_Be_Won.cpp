// LeetCode Problem : 3232. Find if Digit Game Can Be Won
// Link : https://leetcode.com/problems/find-if-digit-game-can-be-won/description/

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sumSingle=0, sumDouble=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] <10){
                sumSingle += nums[i];
            }
            else{
                sumDouble += nums[i];
            }
        }
        if ( sumSingle != sumDouble) return true;
        return false;
    }

    
};
