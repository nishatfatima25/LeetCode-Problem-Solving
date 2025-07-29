// LeetCode Problem : 506. Relative Ranks
// Link : https://leetcode.com/problems/relative-ranks/description/

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int> sorted = score;
        sort(sorted.begin(), sorted.end(), greater<int>());

        vector<string> medal = {"Gold Medal", "Silver Medal", "Bronze Medal"};

        unordered_map<int, string> mpp;

        for(int i=0; i<sorted.size(); i++){
            if(i<3){
                mpp[sorted[i]] = medal[i];
            }
            else{
                mpp[sorted[i]] = to_string(i+1);
            }
        }

        vector<string> ans;

        for(int x : score){
            ans.push_back(mpp[x]);
        }

        return ans;
    }
};
