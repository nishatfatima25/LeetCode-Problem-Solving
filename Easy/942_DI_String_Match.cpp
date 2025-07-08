// LeetCode Problem : 942. DI String Match
// Link : https://leetcode.com/problems/di-string-match/description/

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int left = 0;
        int right = n;

        vector<int> result(n+1);

        for(int i=0; i<n; i++){
            if(s[i] == 'I'){
                result[i] = left++;
            }
            else{
                result[i] = right--;
            }
        }

        result[n] = left;
        return result;
    }
};
