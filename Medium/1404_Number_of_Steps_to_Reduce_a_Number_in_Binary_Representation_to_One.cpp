// LeetCode Problem : 1404. Number of Steps to Reduce a Number in Binary Representation to One
// Link : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/description/

class Solution {
public:
    int numSteps(string s) {
        int n = s.size();
        int carry = 0, count=0;

        for(int i=n-1; i>0; i--){
            int bit = (s[i]-'0') + carry;

            if(bit%2 == 0) count++;
            else{
                count += 2;
                carry = 1;
            }
        }

        return count+carry;
    }
};
