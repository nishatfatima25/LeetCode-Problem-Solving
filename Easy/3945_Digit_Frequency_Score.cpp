// LeetCode Problem : 3945. Digit Frequency Score
// Link : https://leetcode.com/problems/digit-frequency-score/description/

class Solution {
public:
    int digitFrequencyScore(int n) {

        string num = to_string(n);
        unordered_map<char,int> mpp;
        for(auto it : num){
            mpp[it]++;
        }

        int sum = 0;
        for(auto it : mpp){
            int val = it.first-'0';
            int freq = it.second;

            sum += val*freq;
        }

        return sum;
    }
};
