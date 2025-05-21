// LeetCode Problem : 344. Reverse String
// Link : https://leetcode.com/problems/reverse-string/description/

class Solution {
public:
    void reverseString(vector<char>& s) {
        

        //using two-pointers approach
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
