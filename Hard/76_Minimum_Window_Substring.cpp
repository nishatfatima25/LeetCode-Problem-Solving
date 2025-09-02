// LeetCode Problem : 76. Minimum Window Substring
// Link : https://leetcode.com/problems/minimum-window-substring/description/

class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        int left=0,right=0,minLen=INT_MAX;
        unordered_map<char,int> hash;

        if(m > n) return "";

        for(auto &it : t){
            hash[it]++;
        }

        int count = m;
        int startIndex = 0;

        while(right < n){
            if(hash[s[right]] > 0){
                count--;
            }

            hash[s[right]]--;

            while(count == 0){
               int len = right-left+1;

                if(len < minLen){
                    minLen = len;
                    startIndex = left;
                }
                
                hash[s[left]]++;
                
                if(hash[s[left]] > 0) count++;

                left++;
            }

            right++;
        }

        return minLen==INT_MAX ? "" : s.substr(startIndex,minLen);
    }
};
