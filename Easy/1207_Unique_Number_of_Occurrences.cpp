// LeetCode Problem : 1207. Unique Number Of Occurrences
// Link : https://leetcode.com/problems/unique-number-of-occurrences/description/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mpp;

        for(int i=0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }

        set<int> freq;

        for( auto i : mpp){

            if(freq.find(i.second) != freq.end()){
                return false;
            }
            freq.insert(i.second);
        }

        return true;
    }
};
