// LeetCode Problem : 3304. Find the K-th Character in String Game I
// Link : https://leetcode.com/problems/find-the-k-th-character-in-string-game-i/description/

class Solution {
public:
    char kthCharacter(int k) {
        
        string x;
        string s = "ab";

        while(s.size() < k){
            x = s;
            for(auto &ch : x){
                if(ch == 'z'){
                    ch = 'a';
                }
                else{
                    ch = ch +1;
                }
            }

            s = s + x;
        }

        return s[k-1];
    }
};
