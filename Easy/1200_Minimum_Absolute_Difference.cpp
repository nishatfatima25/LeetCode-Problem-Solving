// LeetCode Problem : 1200. Minimum Absolute Difference
// Link : https://leetcode.com/problems/minimum-absolute-difference/description/

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int mini = INT_MAX;
        vector<vector<int>> ans;

        for(int i=0; i<arr.size()-1; i++){
            int difference = arr[i+1] - arr[i];

            if(difference < mini){
                mini = difference;
                ans.clear();
                ans.push_back({arr[i],arr[i+1]});
            }
            else if(difference == mini){
                ans.push_back({arr[i],arr[i+1]});
            }
        }

        return ans;
    }
};
