// LeetCode Problem : 387. First Unique Character in a String
// Link : https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> mpp;
        for(char ch : s){
            mpp[ch]++;
        }

        
        for(int i=0; i<s.size(); i++){
            if(mpp[s[i]] == 1){
                return i;
            }
        }

        return -1;
    }
};
