// LeetCode Problem : 3853. Merge Close Characters
// Link : https://leetcode.com/problems/merge-close-characters/description/

class Solution {
public:
    string mergeCharacters(string s, int k) {
        bool merge = true;

        while(merge){
            merge = false;

            for(int i=0; i<s.size(); i++){
                for(int j = i+1; j<s.size(); j++){
                    if(s[i] == s[j] && j-i <= k){
                        s.erase(j,1);
                        merge = true;
                        break;
                    }
                    if(j-i > k) break;
                }
                if(merge) break;
            }
        }
        return s;
    }
};
