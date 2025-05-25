// LeetCode Problem : 2131. Longest Palindrome by Concatenating Two letter Words
// Link : https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/description/

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mpp;
        int ans =0;

        for(string &word : words){
            string revSt = word;
            //reverse the string
            swap(revSt[0], revSt[1]);

            //if reverse exists then add it to answer and decrease the freq
            if(mpp[revSt] > 0){
                ans = ans + 4;
                mpp[revSt]--;
            }

            //else add the freq in map
            else{
                mpp[word]++;
            }
        }

        // now, check for equal character words but use them only once
        for(auto &it : mpp){
            string word = it.first;
            int count = it.second;

            if(word[0] == word[1] && count>0){
                ans = ans+2;
                break;
            }
        }

        return ans;
    }
};
