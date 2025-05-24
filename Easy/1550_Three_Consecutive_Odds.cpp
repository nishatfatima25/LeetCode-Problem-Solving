// LeetCode Problem : 1550. Three Consecutive Odds
// Link : https://leetcode.com/problems/three-consecutive-odds/description/

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int oddCount =0;

        for(int i=0; i< arr.size(); i++){
            if(arr[i] % 2 ==1){
                oddCount++;
            }
            else{
                oddCount = 0;
            }

            if(oddCount==3){
            return true;
            }
        }

        return false;
    }
};
