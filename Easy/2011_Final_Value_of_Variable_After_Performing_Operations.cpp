// LeetCode Problem : 2011. Final Value of Variable After Performing Operations
// Link : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val=0;

        for(int i=0; i<operations.size(); i++){
            if(operations[i] == "--X" || operations[i] == "X--"){
                val = val - 1;
            }
            else if(operations[i] == "++X" || operations[i] == "X++"){
                val = val + 1;
            }
        }

        return val;
    }
};
