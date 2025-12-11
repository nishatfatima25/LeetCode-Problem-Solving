// LeetCode Problem : 767. Reorganise String
// Link : https://leetcode.com/problems/reorganize-string/description/

class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();

        vector<int> freq(26,0);
        for(char ch : s) freq[ch-'a']++;

        int maxfreq = 0, maxchar = 0;
        for(int i=0; i<26; i++){
            if(freq[i]>maxfreq){
                maxfreq = freq[i];
                maxchar = i;
            }
        }

        if(maxfreq > (n+1)/2) return "";
        string ans(n,' ');
        int idx=0;

        while(freq[maxchar]--){
            ans[idx] = 'a' + maxchar;
            idx +=2;
        }

        for(int i=0; i<26; i++){
            while(freq[i]>0){
                if(idx >= n) idx =1;
                ans[idx] = 'a' + i;
                idx += 2;
                freq[i]--;
            }
        }

        return ans;
        
    }
};
