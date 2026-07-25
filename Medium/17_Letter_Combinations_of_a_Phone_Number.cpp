// LeetCode Problem : 17. Letter Combinations of a Phone Number
// Link : https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

class Solution {
public:
    void solve(string &input, string &output, int idx, vector<string> &ans, string mpp[]){
        if(idx == input.size()){
            ans.push_back(output);
            return;
        }

        int number = input[idx] - '0';
        string value = mpp[number];

        for(int i=0; i<value.size(); i++){
            output.push_back(value[i]);
            solve(input,output,idx+1,ans,mpp);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0) return ans;
        string output;
        string mpp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        solve(digits,output,0,ans,mpp);
        return ans;
    }
};
