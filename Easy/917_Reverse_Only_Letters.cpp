// LeetCode Problem : 917. Reverse Only Letters
// Link : https://leetcode.com/problems/reverse-only-letters/description/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        int left = 0, right = n-1;

        while(left < right){
            while(left < n && !isalpha(s[left])) left++;
            while(right > 0 && !isalpha(s[right])) right--;

            if(left < right){
                swap(s[left],s[right]);
                left++, right--;
            }
        }

        return s;
    }
};
