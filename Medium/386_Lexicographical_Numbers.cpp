// LeetCode Problem : 386. Lexicographical Numbers
// Link : https://leetcode.com/problems/lexicographical-numbers/description/

class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        int val = 1;

        for(int i=0; i<n; i++){
            ans.push_back(val);

            if(val*10 <= n) val *= 10;
            else{
                while(val % 10 == 9 || val +1 > n) val /= 10;
                val++;
            }
        }
        return ans;
    }
};
