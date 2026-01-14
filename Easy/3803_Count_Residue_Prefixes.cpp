// LeetCode Problem : 3803. Count Residue Prefixes
// Link : https://leetcode.com/problems/count-residue-prefixes/description/

class Solution {
public:
    int residuePrefixes(string s) {
        
        unordered_set<char> st;
        int count = 0;

        for(int i =0; i<s.size(); i++){
            st.insert(s[i]);

            if(st.size() == (i+1)%3) count++;
            if(st.size() >= 3) return count;
        }

        return count;
    }
};
