// LeetCode Problem : 771. Jewels and Stones
// Link : https://leetcode.com/problems/jewels-and-stones/description/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count =0;

        for(int i=0; i<jewels.size(); i++){
            for(int j=0; j<stones.size(); j++){
                if(jewels[i] == stones[j]) count++;
            }
        }

        return count;
    }
};
