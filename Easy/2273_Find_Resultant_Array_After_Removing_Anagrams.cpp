// LeetCode Problem : 2273. Find Resultant Array After Removing Anagrams
// Link : https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/description/

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        string previous = "";

        for(string word : words){
            string st = word;
            sort(st.begin(), st.end());

            if(st != previous){
                ans.push_back(word);
                previous = st;
            }
        }

        return ans;
    }
};
