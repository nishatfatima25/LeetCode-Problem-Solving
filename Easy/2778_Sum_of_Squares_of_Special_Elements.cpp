// LeetCode Problem : 2778. Sum of Squares of Special Elements
// Link : https://leetcode.com/problems/sum-of-squares-of-special-elements/description/
class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        for(int i=0; i< nums.size(); i++){
            if(n%(i+1) == 0) sum += nums[i]*nums[i];
        }

        return sum;
    }
};
