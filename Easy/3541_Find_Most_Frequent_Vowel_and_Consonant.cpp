// LeetCode Problem : 3541. Find Most Frequent Vowel and Consonant
// Link : https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/description/

class Solution {
public:
    int maxFreqSum(string s) {

        int maxVowel = 0, maxConso = 0;

        unordered_map<char, int> mpp;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {

                mpp[s[i]]++;
                maxVowel = max(maxVowel, mpp[s[i]]);
            } else {
                mpp[s[i]]++;
                maxConso = max(maxConso, mpp[s[i]]);
            }
        }

        return maxVowel + maxConso;
    }
};


//2nd version
class Solution {
public:
    int maxFreqSum(string s) {

        int maxVowel = 0, maxConso = 0;

        unordered_map<char,int> mpp;

        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }

        for(auto &it : mpp){
            if(it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o'
                || it.first == 'u'){
                    maxVowel = max(maxVowel,it.second);
                }
            
            else{
                maxConso = max(maxConso,it.second);
            }
        }

        return maxVowel + maxConso;

    }
};


