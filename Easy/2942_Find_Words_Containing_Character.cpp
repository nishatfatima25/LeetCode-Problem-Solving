// LeetCode Problem : 2942. Find Words Containing Character
// Link : https://leetcode.com/problems/find-words-containing-character/

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        
        int index = 0;
        vector<int> ans;

        for(auto &i : words){
            for(char ch : i){
                if(ch==x){
                    ans.push_back(index);
                    break;
                }
            }
            index++;
        }

        return ans;
    }
};
