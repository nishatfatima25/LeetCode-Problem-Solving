// LeetCode Problem : 1002. Find Common Characters
// Link : https://leetcode.com/problems/find-common-characters/description/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> mpp;

        for(char ch : words[0]){
            mpp[ch]++;
        }

        for(int i=1; i<words.size(); i++){
            unordered_map<char,int> freq;
            for(char ch : words[i]){
                freq[ch]++;
            }

            for(auto& it : mpp){
            it.second = min(it.second,freq[it.first]);
            }
        }

        vector<string> ans;
        for(auto& it : mpp){
            for(int i=0; i<it.second; i++){
                ans.push_back(string(1,it.first));
            }           
        }
        
        return ans;
    }
};
