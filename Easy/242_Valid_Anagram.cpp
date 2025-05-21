// LeetCode Problem : 242. Valid Anagram
// Link : https://leetcode.com/problems/valid-anagram/description/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int> freq(26,0);
        for(int i=0; i<s.size(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int count: freq){
            if(count !=0){
                return false;
            }
        }
        return true;
    }
};
