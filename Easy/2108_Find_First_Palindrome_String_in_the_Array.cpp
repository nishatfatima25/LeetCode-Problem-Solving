// LeetCode Problem : 2108. Find First Palindrome String in the Array
// Link : https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/

class Solution {
public:

    bool palindrome(string str){
        string org = str;

        reverse(str.begin(),str.end());

        if(str == org) return true;
        return false;
    }

    string firstPalindrome(vector<string>& words) {
        
        for(int i=0; i<words.size(); i++){
            if(palindrome(words[i])){
                return words[i];
            }
        }

        return "";
    }
};
