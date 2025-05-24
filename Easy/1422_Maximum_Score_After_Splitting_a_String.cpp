// LeetCode Problem : 1422. Maximum Score After Splitting a String
//  Link : https://leetcode.com/problems/maximum-score-after-splitting-a-string/description/

class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int result=0;
        int zeroes=0;

        for(int i=0; i<n-1; i++){
            if(s[i]=='0'){
                zeroes++;
            }
            int ones =0;
            for(int j=i+1; j<n; j++){
                if(s[j]=='1'){
                ones++;
            }
        }
        result = max(result, zeroes+ones);
        }
    return result;
    }
};
