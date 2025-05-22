// LeetCode Problem : 1128. Number of Equivalent Domino Pairs
// Link : https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            map<pair<int, int>, int> mpp;
            int count = 0;
            for(auto& x : dominoes){
                if(x[0] > x[1]) swap(x[0], x[1]);
                count += mpp[make_pair(x[0], x[1])]++;
            }
            return count;
        }
    };
