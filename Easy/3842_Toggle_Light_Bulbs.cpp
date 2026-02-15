// LeetCode Problem : 3842. Toggle Light Bulbs
// Link : https://leetcode.com/problems/toggle-light-bulbs/description/

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& arr) {
        
        unordered_map<int,int> mpp;

        for(int i=0; i<arr.size(); i++){
            mpp[arr[i]] = !mpp[arr[i]];
        }

        vector<int> ans;
        for(auto it : mpp){
            if(it.second == 1) ans.push_back(it.first);
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};
