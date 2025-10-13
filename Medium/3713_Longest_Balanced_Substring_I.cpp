// LeetCode Problem : 3713. Longest Balanced Substring I
// Link : https://leetcode.com/problems/longest-balanced-substring-i/description/

class Solution {
public:
    int longestBalanced(string s) {
        int maxi = 1;

        for(int i=0; i<s.size(); i++){
            unordered_map<int,int> mpp;
            int count=0,len=0;

            for(int j=i; j< s.size(); j++){
                if(mpp[s[j]] == 0) count++;
                mpp[s[j]]++;

                len = max(len,mpp[s[j]]);

                int n = j-i+1;
                if(count*len == n) maxi = max(maxi,n);
            }
        }

        return maxi;
    }
};
