// LeetCode Problem : 1653. Minimum Deletions to Make String Balanced
// Link : https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/description/

class Solution {
public:
    int minimumDeletions(string s) {
        
        int deletions = 0;
        int countB = 0;

        for(char ch : s){

            if(ch == 'b') countB++;
            else if(countB >0){
                deletions++;
                countB--;
            }
        }

        return deletions;
    }
};
