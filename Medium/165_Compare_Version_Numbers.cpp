// LeetCode Problem : 165. Compare Version Numbers
// Link : https://leetcode.com/problems/compare-version-numbers/description/

class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        vector<int> s1,s2;

        stringstream ss1(version1);
        string number;

        while(getline(ss1,number,'.')) s1.push_back(stoi(number));

        stringstream ss2(version2);
        while(getline(ss2,number,'.')) s2.push_back(stoi(number));

        int n = max(s1.size(),s2.size());
        s1.resize(n,0);
        s2.resize(n,0);

        for(int i=0; i<n; i++){
            if(s1[i] < s2[i]) return -1;
            if(s1[i] > s2[i]) return 1;
        }
        
        return 0;
    }
};
