// LeetCode Problem : 125. Valid Palindrome
// Link : https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:

    string normal(const string& s){
        string newString;
        for(char ch : s){
            if(isalnum(ch)){
                newString +=  tolower(ch);
            }
        }
        return newString;
    }
    bool isPalin(string s){
        string rev = s;
        reverse(rev.begin(), rev.end());
        if(rev == s){
            return true;
        }
        else{
            return false;
        }
    }
    bool isPalindrome(string s) {
       string answer = normal(s);
       return isPalin(answer);
    }
};
