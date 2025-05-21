// LeetCode Problems : 434. Number of Segments in a String
// Link : https://leetcode.com/problems/number-of-segments-in-a-string/description/

class Solution {
public:
    int countSegments(string s) {
        
        int count = 0;
        s.push_back(' ');
        for(int i=1; i<s.size(); i++){
            if(s[i] == ' ' && s[i-1] != ' '){
                count++;
            }
        }

        return count;
    }
};
