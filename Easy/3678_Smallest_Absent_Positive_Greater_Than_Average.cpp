// LeetCode Problem : 3678. Smallest Absent Positive Greater Than Average
// Link : https://leetcode.com/problems/smallest-absent-positive-greater-than-average/

class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        
        double sum = accumulate(nums.begin(),nums.end(),0);
        double avg = sum/nums.size();

        unordered_set<int> st(nums.begin(),nums.end());

        int count = floor(avg) +1;
        while(true){
            if(count > 0 && st.find(count) == st.end()) return count;
            count++;
        }
        
    }
};
