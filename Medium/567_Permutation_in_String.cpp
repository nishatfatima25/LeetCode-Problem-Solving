// LeetCode Problem : 567. Permutation in String
// Link : https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()){
            return false;
        }

        unordered_map<char,int> s1Freq;
        unordered_map<char,int> s2Freq;

        for(int i=0; i<s1.size(); i++){
            s1Freq[s1[i]]++;
            s2Freq[s2[i]]++;
        }

        if(s1Freq == s2Freq){
            return true;
        }

        int l = 0;
        for(int r = s1.size(); r<s2.size(); r++){
            s2Freq[s2[r]]++;
            s2Freq[s2[l]]--;

            if(s2Freq[s2[l]] ==0){
                s2Freq.erase(s2[l]);
            }

            l++;

            if(s1Freq == s2Freq){
                return true;
            }
        }

        return false;
    }
};
