// LeetCode Problem : 459. Repeated Substring Pattern
// Link : https://leetcode.com/problems/repeated-substring-pattern/description/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
        int n = s.size();
        for(int i=1; i<= n/2; i++){
            if(n%i == 0){
                string substr = s.substr(0,i);
                string rep = "";
                for(int j=0; j<n/i; j++){
                    rep += substr;
                }

                if(rep == s) return true;
            }
        }

        return false;
    }
};
