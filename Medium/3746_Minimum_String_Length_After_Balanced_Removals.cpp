// LeetCode Problem : 3746. Minimum String Length After Balanced Removals
// Link : https://leetcode.com/problems/minimum-string-length-after-balanced-removals/description/

class Solution {
public:
    int minLengthAfterRemovals(string s) {
        
        int a = 0;
        int b = 0;

        for(char ch : s){
            if(ch == 'a') a++;
            else if(ch == 'b') b++;
        }

        int ans = abs(a-b);

        return ans;
    }
};
