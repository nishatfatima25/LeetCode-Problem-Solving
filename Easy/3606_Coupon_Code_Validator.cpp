// LeetCode Problem : 3606. Coupon Code Validator
// Link : https://leetcode.com/problems/coupon-code-validator/description/

class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        
        int n = code.size();
        unordered_map<string,int> sortOrder = {{"electronics",0},{"grocery",1},{"pharmacy",2},{"restaurant",3}};

        vector<pair<pair<int,string>,string>> sortCoup;

        for(int i=0; i<n; i++){
            if(!isActive[i]) continue;
            if(sortOrder.find(businessLine[i]) == sortOrder.end()) continue;

            if(code[i].empty()) continue;
            bool isValid = true;
            for(char ch : code[i]){
                if(!(isalnum(ch) || ch == '_')){
                    isValid = false;
                    break;
                }
            }

            if(!isValid) continue;

            int idx = sortOrder[businessLine[i]];
            sortCoup.push_back({{idx,code[i]},code[i]});
        }

        sort(sortCoup.begin(),sortCoup.end());

        vector<string> ans;

        for(auto it : sortCoup){
            ans.push_back(it.second);
        }

        return ans;
    }
};
