// LeetCode Problem : 1876. Substrings of Size Three with Distinct Characters
// Link : https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/description/

class Solution {
public:
    int countGoodSubstrings(string s) {
        int repeat = 0;
        int count =0;

        if(s.size() < 3) return 0;
        int mpp[26] = {0};

        for(int i=0; i<s.size(); i++){
            mpp[s[i]-'a']++;
            if(mpp[s[i]-'a'] == 2) repeat++;
            if(i<2) continue;
            if(repeat == 0) count++;

            mpp[s[i-2]-'a']--;
            if(mpp[s[i-2]-'a'] == 1) repeat--;
        }

        return count;
    }
};
