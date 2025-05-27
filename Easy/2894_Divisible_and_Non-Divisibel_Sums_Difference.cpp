// LeetCode Problem : 2894. Divisible and Non-divisible Sums Difference
// Link : https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/description/

class Solution {
public:
    int differenceOfSums(int n, int m) {
        
        int sumN=0,sumM=0;
        for(int i=1; i<=n; i++){
            if(i%m != 0){
                sumN = sumN + i;
            }
            else{
                sumM = sumM +i;
            }
        }

        return sumN-sumM;
    }
};
