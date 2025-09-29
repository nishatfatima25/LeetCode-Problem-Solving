// LeetCode Problem : 3697. Compute Decimal Representation
// Link : https://leetcode.com/problems/compute-decimal-representation/description/

class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> values;
        long mul = 1;

        while(n){
            int digit = n % 10;
            if(digit>0){
                int val = digit*mul;
                values.insert(values.begin(),val);
            }

            mul *= 10;
            n /=10;
        }

        return values;
    }
};
