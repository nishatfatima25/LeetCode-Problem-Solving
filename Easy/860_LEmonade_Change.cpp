// LeetCode Problem : 860. Lemonade Change
// Link : https://leetcode.com/problems/lemonade-change/description/

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveCount=0;
        int tenCount=0;
        int twentyCount=0;

        
        for(int i =0 ; i<bills.size() ; i++){
            if(bills[i] == 5){
                fiveCount++;
            }
            else if(bills[i] == 10 ){
                if(fiveCount){
                    tenCount+=1;
                    fiveCount-=1;
                }
                else{
                    return false;
                }
                
            }
           else{
            if(fiveCount && tenCount){
                twentyCount+=1;
                fiveCount-=1;
                tenCount-=1;
            }
            else if(fiveCount>=3){
                twentyCount+=1;
                fiveCount-=3;
            }
            else{
                return false;
            }
           }
        }
        return true;
        
    }
};
