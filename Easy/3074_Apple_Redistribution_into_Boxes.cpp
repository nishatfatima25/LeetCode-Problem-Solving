// LeetCode Problem : 3074. Apple Redistribution into Boxes
// Link : https://leetcode.com/problems/apple-redistribution-into-boxes/description/

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        int sum = accumulate(apple.begin(), apple.end(),0);
        int count =0;

        int sum2=0;
        sort(capacity.begin(), capacity.end(), greater<int>());
        
        for(int i=0; i<capacity.size(); i++){
            sum2 += capacity[i];
            count++;
            if(sum2 >= sum) return count;
        }

        return count;
    }
};
