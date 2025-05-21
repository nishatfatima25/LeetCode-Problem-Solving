//LeetCode Problem : 28. Find the Index of the First Occurrence in a String
//Link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int m = haystack.size();
        
        if(n==0){
            return 0;
        }
        if(m<n){
            return -1;
        }
        for(int i=0; i<m; i++){
            if(haystack[i]==needle[0]){
                if(haystack.substr(i,n)==needle){
                    return i;
                }
            }
        }
        return -1;
    }
};
