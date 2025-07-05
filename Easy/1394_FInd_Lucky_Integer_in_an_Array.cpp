// LeetCode Problem : 1394. Find Lucky Integer in an Array
// Link : https://leetcode.com/problems/find-lucky-integer-in-an-array/description/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;

        for(int x : arr){
            mpp[x]++;
        }

        int ans = -1;
        for(auto& [key, value] : mpp){
            if(key == value){
                ans = max(ans, key);
            }
        }

        return ans;
    }
};
