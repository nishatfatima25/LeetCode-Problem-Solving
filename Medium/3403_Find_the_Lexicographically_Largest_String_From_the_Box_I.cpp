// LeetCode Problem : 3403. Find the Lexicographically Largest Striing from the Bob I
// Link : https://leetcode.com/problems/find-the-lexicographically-largest-string-from-the-box-i/description/

class Solution {
public:
    string answerString(string word, int numFriends) {
        string ans ="";
        int n = word.size();

        if(numFriends == 1){
            return word;
        }
        for(int i=0; i<word.size() ; i++){
           ans = max(ans, word.substr(i,n-numFriends + 1) ); 
        }

        return ans;
    }
};
