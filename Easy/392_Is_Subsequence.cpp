// LeetCode Problem : 392. Is Subsequence
// Link : https://leetcode.com/problems/is-subsequence/description/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
    if(s==""){
        return true;
    }
    //iterate thru each character of t and check whether it matches with s, if it does then increment the pointer in s until it reaches the end of s
        int j=0;
        for(int i=0; i<n2; i++){
           if(j<n1 && t[i]==s[j]){  
            j++;
           }
           if(j==n1){
            return true;
           }
        }
        return false;
    }
};
