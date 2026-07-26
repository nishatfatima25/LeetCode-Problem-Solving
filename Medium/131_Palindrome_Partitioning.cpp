// LeetCode Profile : 131. Palindrome Partitioning
// Link : https://leetcode.com/problems/palindrome-partitioning/

class Solution {
public:

    bool isPalindrome(string s){
        string s2 = s;
        reverse(s2.begin(),s2.end());

        return (s==s2);
    }

    void solve(string s,vector<string> &partitions, vector<vector<string>> &ans){

        if(s.size() == 0){
            ans.push_back(partitions);
            return;
        }

        for(int i=0; i<s.size(); i++){
            //get part of string
            string parts = s.substr(0,i+1);
            if(isPalindrome(parts)){
                partitions.push_back(parts);        //if palindrome, push in output
                solve(s.substr(i+1),partitions,ans); //and check for rest
                partitions.pop_back();               //backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;
        solve(s,partitions,ans);

        return ans;
    }
};
