// LeetCode Problem : 1768. Merge Strings Alternatively
// Link : https://leetcode.com/problems/merge-strings-alternately/description/

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer="";
        int m = word1.size();
        int n = word2.size();
        int i=0;
        
        while(i<m || i<n){
            if(i<m){
                answer = answer+word1[i];
            }
            if(i<n){
                answer = answer+word2[i];
            }
            i++;
        }
        return answer;
    }
};
