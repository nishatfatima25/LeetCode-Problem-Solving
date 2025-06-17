// LeetCode Problem : 3. Longest Substring Without Repeating Characters
// Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char, int> map;
        int left =0, right=0;
        int maxlen = 0;
        int n = s.size();

        while(right < n){
            if(map.find(s[right]) != map.end()){
                left = max(left, map[s[right]] + 1);
            }

            int len = right - left + 1;
            maxlen = max(maxlen, len);
            map[s[right]] = right;
            right++;
        }

        return maxlen;
    }
};
