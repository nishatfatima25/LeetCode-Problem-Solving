// LeetCode Problem : 2103. Rings and Rods
// Link : https://leetcode.com/problems/rings-and-rods/description/

class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,set<char>>mpp;

        for(int i=0;i<rings.size();i+=2){
            mpp[rings[i+1]-'0'].insert(rings[i]);
        }

        int count=0;
        for(auto it:mpp){
            set<char> val = it.second;
            if(val.size()==3)count++;
        }
        return count;
    }
};
