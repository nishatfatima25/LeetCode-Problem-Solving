// LeetCode Problem : 205. Isomorphic Strings
// Link : https://leetcode.com/problems/isomorphic-strings/description/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> strS;
        unordered_map<char,char> strT;

        for(int i=0; i<s.size(); i++){

            if(strS.find(s[i]) == strT.end()){
                strS[s[i]] = i;
            }

            if(strT.find(t[i]) == strT.end()){
                strT[t[i]] = i;
            }

            if (strS[s[i]] != strT[t[i]]){
                return false;
            }
        }

        return true;
    }
};
