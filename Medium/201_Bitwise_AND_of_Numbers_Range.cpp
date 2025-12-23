// LeetCode Problem : 201. Bitwise AND of Numbers Range
// Link : https://leetcode.com/problems/bitwise-and-of-numbers-range/description/

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        int ans = 0;

        while(left < right){
            left >>=1;
            right >>=1;
            ans++;
        }
        return left<<ans;
    }
};
