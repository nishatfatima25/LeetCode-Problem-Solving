// LeetCode Problem : 1295. Find Numbers with Even Number of Digits
// Link : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int count =0;
        for(int i : nums){

        string str = to_string(i);

        if(str.size()%2==0){
            count++;
        }   
            
        }

        return count;
    }
};
