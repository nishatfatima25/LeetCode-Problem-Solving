// LeetCode Problem : 3931. Check Adjacent Digit Differences
// Link : https://leetcode.com/problems/check-adjacent-digit-differences/description/

class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        
        for(int i=0; i<s.size()-1; i++){
            if(abs(s[i]-s[i+1]) > 2){
                return false;
                break;
            }
        }

        return true;
    }
};
