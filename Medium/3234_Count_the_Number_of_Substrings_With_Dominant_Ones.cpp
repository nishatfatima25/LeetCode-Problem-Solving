// LeetCode Problem : 3234. Count the Number of Substrings With Dominant Ones
// Link : https://leetcode.com/problems/count-the-number-of-substrings-with-dominant-ones/description/

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int> lastZeroPos(n + 1);
        lastZeroPos[0] = -1;

        for (int idx = 0; idx < n; idx++) {
            if (idx == 0 || (idx > 0 && s[idx - 1] == '0')) {
                lastZeroPos[idx + 1] = idx;
            } else {
                lastZeroPos[idx + 1] = lastZeroPos[idx];
            }
        }

        int total = 0;

        for (int right = 1; right <= n; right++) {
            int zeroCount = (s[right - 1] == '0');
            int pointer = right;

            while (pointer > 0 && zeroCount * zeroCount <= n) {
                int oneCount = (right - lastZeroPos[pointer]) - zeroCount;

                if (zeroCount * zeroCount <= oneCount) {
                    total += min(pointer - lastZeroPos[pointer],
                                 oneCount - zeroCount * zeroCount + 1);
                }

                pointer = lastZeroPos[pointer];
                zeroCount++;
            }
        }

        return total;
    }
};
