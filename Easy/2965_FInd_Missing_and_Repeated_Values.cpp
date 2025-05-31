// LeetCode Problem : 2965. Find Missing and Repeated Values
// Link : https://leetcode.com/problems/find-missing-and-repeated-values/description/


//Brute Force

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = grid.size();
        unordered_map<int,int> mpp;
        int repeated=-1, sum =0;

        for (const auto& row : grid) {
            for (int num : row) {
                mpp[num]++;
                sum += num;
            }
        }

        for (const auto& [num, count] : mpp) {       
            if(count==2){
                repeated = num;
                break;
            }
        }

        int n = size*size;
        int Sum = n*(n+1)/2;

        int ans = Sum - (sum - repeated);

        return {repeated, ans};

    }
};
