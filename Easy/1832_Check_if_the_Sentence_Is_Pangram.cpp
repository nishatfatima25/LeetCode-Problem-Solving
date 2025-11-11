// LeetCode Problem : 1832. Check if the Sentence Is Pangram
// Link : https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

class Solution {
public:
    bool checkIfPangram(string sentence) {

        unordered_map<char,int> mpp;
        for(int i=0; i<sentence.size(); i++){
            mpp[sentence[i]]++;
        }   

        for(char ch = 'a'; ch <= 'z'; ch++){
            if(mpp.find(ch) == mpp.end()) return false;
        }

        return true;
    }
};

