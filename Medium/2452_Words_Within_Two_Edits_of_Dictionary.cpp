// LeetCode Problem : 2452. Words Within Two Edits of Dictionary
// Link : https://leetcode.com/problems/words-within-two-edits-of-dictionary/description/

class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        
        vector<string> ans;
        int left = queries[0].size();

        for(int i=0; i<queries.size(); i++){
            for(int j=0; j< dictionary.size(); j++){
                int val = 0;

                for(int k =0; k<left; k++){
                    if(queries[i][k] != dictionary[j][k]) val++;
                }
                if(val <= 2){
                    ans.push_back(queries[i]);
                    break;
                }
            }
        }

        return ans;
    }
};
