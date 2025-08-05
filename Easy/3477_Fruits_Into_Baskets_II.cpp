// LeetCode Problem : 3477. Fruits Into Baskets II
// Link : https://leetcode.com/problems/fruits-into-baskets-ii/description/

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        
        int sizeOfArray = fruits.size();

        int count=0;

        for(int i=0; i<sizeOfArray; i++){
            for(int j=0; j< sizeOfArray; j++){
                if(fruits[i] <= baskets[j]){
                    count++;
                    baskets[j] = -1;
                    break;
                }
            }
        }

        int ans = sizeOfArray - count;

        return ans;
    }
};
