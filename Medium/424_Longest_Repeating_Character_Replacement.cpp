// LeetCode Problem : 424. Longest Repeating Character Replacement
// Link : https://leetcode.com/problems/longest-repeating-character-replacement/description/

class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int left=0,right =0;
        int maxFreq=0,maxLen=0;
        vector<int> hash(26,0);

        while( right < s.size()){

            hash[s[right]-'A']++;
            maxFreq = max(maxFreq,hash[s[right]-'A']);

            int conversions = (right-left+1) - (maxFreq);

            if(conversions > k){
                hash[s[left]-'A']--;
                maxFreq=0;
                left++;
            }

            if(conversions <= k){
                maxLen = max(maxLen,right-left+1);
            }
            right++;
        }

        return maxLen;
    }
};
