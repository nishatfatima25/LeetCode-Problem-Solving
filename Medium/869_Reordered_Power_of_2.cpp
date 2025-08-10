// LeetCode Problem : 869. Reordered Power of 2
// Link : https://leetcode.com/problems/reordered-power-of-2/description/

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        
        string num = to_string(n);
        
        sort(num.begin(), num.end());

        for(int i=0; i<30; i++){
            string num2 = to_string(1 << i);
            sort(num2.begin(), num2.end());

            if(num == num2){
            return true;
            }
        }

        return false;
    }
};
