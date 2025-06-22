// LeetCode Problem : 2138. Divide a String Into Groups of Size k
// Link : https://leetcode.com/problems/divide-a-string-into-groups-of-size-k/description/

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        string st = "";
        vector<string> ans;
        for(int i=0; i<s.size(); i++){
            st = st+ s[i];
            if(st.size() == k){
                ans.push_back(st);
                st = "";
            }
        }

        if(st.size() != 0){
            while(st.size() < k){
                st = st+fill;
            }
            ans.push_back(st);
        }

        return ans;
    }

    
};
