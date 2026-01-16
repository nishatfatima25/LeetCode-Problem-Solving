// LeetCode Problem : 400. Nth Digit
// Link : https://leetcode.com/problems/nth-digit/description/

class Solution {
public:
    int findNthDigit(int n) {
        long long length = 1;
        long long count = 9;
        long long start = 1;

        while( n > length*count){
            n -= length*count;
            length++;
            count = count * 10;
            start = start * 10;
        }

        int num = start + (n-1) / length;

        int idx = (n-1)%length;
        string s = to_string(num);

        return s[idx]-'0';
    }
};
