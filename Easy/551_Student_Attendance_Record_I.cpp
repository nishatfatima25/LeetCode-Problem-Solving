// LeetCode Problem : 551. Student Attendance Record I
// Link : https://leetcode.com/problems/student-attendance-record-i/description/

class Solution {
public:
    bool checkRecord(string s) {
        
        int countA=0;
        int countL =0;

        for(char ch : s){
            if(ch == 'A'){
                countA++;
                if(countA >=2){
                    return false;
                }
            }
            if(ch == 'L'){
                countL++;
                if(countL >=3){
                    return false;
                }
                
            }
            else{
                    countL=0;
                }
        }

        return true;
    }
};
