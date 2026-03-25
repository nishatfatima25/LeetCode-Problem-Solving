// LeetCode Problem : 1310. XOR Queries of a Subarray
// Link : https://leetcode.com/problems/xor-queries-of-a-subarray/description/

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
    
        vector<int> prefix;
        prefix.push_back(arr[0]);
        for(int i=1; i<arr.size(); i++) prefix.push_back(prefix[i-1] ^ arr[i]);

        vector<int> ans;
        for(auto it : queries){
            int left = it[0];
            int right = it[1];

            if(left == 0) ans.push_back(prefix[right]);
            else ans.push_back(prefix[right] ^ prefix[left-1]);
        }
        return ans;

    }
};
