// LeetCode Problem : 1346. Check If N and Its Double Exist
// Link : https://leetcode.com/problems/check-if-n-and-its-double-exist/description/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        for(int i=0; i<arr.size(); i++){
            for(int j=0; j<arr.size(); j++){
                if(i !=j && arr[i] == 2*arr[j]){
                    return true;
                }
            }
        }

        return false;
    }
};
