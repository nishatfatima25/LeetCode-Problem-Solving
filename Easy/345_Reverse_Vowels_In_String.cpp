// LeetCode Problem : 345. Reverese Vowels of a String
// Link : https://leetcode.com/problems/reverse-vowels-of-a-string/description/

class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right = s.size()-1;

        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        while(left < right){
            while(left < right && vowels.count(s[left])==0){
                left++;
            }
            while(left < right && vowels.count(s[right])==0){
                right--;
            }
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
    }
};
