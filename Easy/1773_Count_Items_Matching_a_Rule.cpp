// LeetCode Problem : 1773. Count Items Matching a Rule
// Link : https://leetcode.com/problems/count-items-matching-a-rule/description/
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int val;
        if(ruleKey == "type") val = 0;
        if(ruleKey == "color") val = 1;
        if(ruleKey == "name") val = 2;

        int ans =0;
        for(int j=0; j<items.size(); j++){
            if(items[j][val] == ruleValue) ans++;
        }

        return ans;
    }
};
