// LeetCode Problem : 3754. Concatenate Non-Zero Digits and Multiply by Sum I
// Link : https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i/description/

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        string st = to_string(n);

        string newSt = "";
        for (int i = 0; i < st.size(); i++) {
            if (st[i] != '0') {
                newSt += st[i];
                sum += (st[i] - '0');
            }
        }

        if (newSt == "") return 0;

        long long ans = stoll(newSt) * sum;
        return ans;
    }
};
