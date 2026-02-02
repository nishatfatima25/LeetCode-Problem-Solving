class Solution {
public:
    vector<int> grayCode(int n) {
        
        int x = 1 <<n;
        vector<int> ans(x);

        for(int i=0; i<x; i++){
            ans[i] = i^(i>>1);
        }

        return ans;
    }
};
