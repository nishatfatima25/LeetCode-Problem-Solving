// LeetCode Problem : 3751. Total Waviness of Numbers in Range I
// Link : https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/description/

class Solution {
public:

    int countWaviness(int num){
        string numstr = to_string(num);
        int n = numstr.size();

        if(n < 3) return 0;
        int wav=0;

        for(int i=1; i<n-1; i++){
            int prev = numstr[i-1]-'0';
            int curr = numstr[i]-'0';
            int next = numstr[i+1]-'0';

            if((curr>prev && curr>next) || (curr<prev && curr<next)) wav++;
        }

        return wav;
    }

    int totalWaviness(int num1, int num2) {
        int ans =0;

        for(int i=num1; i<=num2; i++) ans += countWaviness(i);

        return ans;
    }
};
