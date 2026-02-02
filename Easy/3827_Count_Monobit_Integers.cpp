// LeetCode Problem : 3827. Count Monobut Integers
// Link : https://leetcode.com/problems/count-monobit-integers/description/

class Solution {
public:
    int countMonobit(int n) {
        long long curr = 1;
        int count =1;

        while(curr <= n){
            count++;
            curr = (curr << 1) | 1;
        }

        return count;
    }
};
