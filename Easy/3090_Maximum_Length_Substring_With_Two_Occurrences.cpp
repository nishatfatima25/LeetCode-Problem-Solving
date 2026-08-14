// LeetCode Problem : 3090. Maximum Length Substring With Two Occurrences
// Link : https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/description/

class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int l=0, r=0, ans=0;
        unordered_map<char,int> mpp;

        while(r<n){
            mpp[s[r]]++;

            while(mpp[s[r]] > 2){
                mpp[s[l]]--;
                if(mpp[s[l]] == 0) mpp.erase(s[l]);
                l++;
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
