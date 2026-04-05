// LeetCode Problem : 3899. Mirror Frequency Distance
// Link : https://leetcode.com/problems/mirror-frequency-distance/description/

class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> mpp(128,0);
        for(char ch : s) mpp[ch]++;
        int ans = 0;

        for(char ch : s){
            if(mpp[ch] == -1) continue;

            char val;
            if(isdigit(ch)) val = '9'-(ch-'0');
            else val = 'z' - (ch-'a');

            ans += abs(mpp[ch] - mpp[val]);
            mpp[ch] = -1;
            mpp[val] = -1;
        }

        return ans;
    }
};
