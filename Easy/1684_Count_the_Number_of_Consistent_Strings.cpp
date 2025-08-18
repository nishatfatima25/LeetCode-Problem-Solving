// LeetCode Problem : 1684. Count the Number of Consistent Strings
// Link : https://leetcode.com/problems/count-the-number-of-consistent-strings/description/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<int,int> mpp;
        int count = 0;

        for(auto it : allowed){
            mpp[it]++;
        }

        for(int i=0; i<words.size(); i++){
            set<char> st;
            bool flag = true;

            for(auto x : words[i]){
                st.insert(x);
            }

            for(auto x : st){
                if(mpp.find(x) == mpp.end()){
                    flag = false;
                    break;
                }
            }

            if(flag) count++;
        }

        return count;
    }
};
