// LeetCode Problem : 796. Rotate String
// Link : https://leetcode.com/problems/rotate-string/description/

class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.size() != goal.size()) return false;

        for(int i=0; i<s.size(); i++){

            char first = s[0]; //take starting value
            s.erase(s.begin()); // remove this val from string
            s.push_back(first); //insert this char at last of string -> one rot complete

            //now, check if both the strings are equal or not

            if(s == goal) return true;
        }

        return false;
    }
};
