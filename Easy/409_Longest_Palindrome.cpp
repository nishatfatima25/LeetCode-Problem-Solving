// LeetCode Problem : 409. Longest Palindrome
// Link : https://leetcode.com/problems/longest-palindrome/description/

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mpp;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }

        int count = 0;
        bool oddFreq = false;

        for(auto &i : mpp){

            int val = i.second;

            if(val%2==0){
                count += val;
            }
            else{
                count += val-1;
                oddFreq = true;
            }
        }

        if(oddFreq){
            return count+1;
        }

        return count;
    }
};
