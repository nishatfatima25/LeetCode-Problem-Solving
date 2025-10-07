// LeetCode Problem : 3658. GCD of Odd and Even Sums
// Link : https://leetcode.com/problems/gcd-of-odd-and-even-sums/description/


// method - 1

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evenSum = n*(n+1);
        int oddSum = (n*n);

        return gcd(evenSum,oddSum);
    }
};


// method - 2
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        return n;
    }
};
