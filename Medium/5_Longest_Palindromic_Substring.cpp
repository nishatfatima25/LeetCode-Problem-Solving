// LeetCode Problem : 5. Longest Palindromic Substring
// Link : https://leetcode.com/problems/longest-palindromic-substring/description/

class Solution {
public:
    string longestPalindrome(std::string s) {
        if (s.length() <= 1) {
            return s;
        }

        auto expand_from_center = [&](int left, int right) {
            while (left >= 0 && right < s.length() && s[left] == s[right]) {
                left--;
                right++;
            }
            return s.substr(left + 1, right - left - 1);
        };

        string max_str = s.substr(0, 1);

        for (int i = 0; i < s.length() - 1; i++) {
            string odd = expand_from_center(i, i);
            string even = expand_from_center(i, i + 1);

            if (odd.length() > max_str.length()) {
                max_str = odd;
            }
            if (even.length() > max_str.length()) {
                max_str = even;
            }
        }

        return max_str;
    }
};
