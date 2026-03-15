// LeetCode Problem : 3870. Count Commas in Range
// Link : https://leetcode.com/problems/count-commas-in-range/description/

class Solution {
public:
    int countCommas(int n) {

        int count = 0;
        for(int i=1; i<=n; i++){
            if(i>=1000 && i<= 100000) count++;
        }

        return count;
    }
};
