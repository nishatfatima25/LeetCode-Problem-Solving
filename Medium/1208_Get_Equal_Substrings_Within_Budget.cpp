// LeetCode Problem : 1208. Get Equal Substrings Within Budget
// Link : https://leetcode.com/problems/get-equal-substrings-within-budget/description/

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int left = 0, sum = 0, maxi = 0;
        int n = s.size();

        for(int right = 0; right <n; right++){
            sum += abs(s[right]-t[right]);

            while(sum > maxCost){
                sum -= abs(s[left]-t[left]);
                left++;
            }
            maxi = max(maxi,right-left+1);
        }
        return maxi;
    }
};
