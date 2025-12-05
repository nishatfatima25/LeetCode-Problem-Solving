// LeetCode Problem : 728. Self Dividing Number
// Link : https://leetcode.com/problems/self-dividing-numbers/description/

class Solution {

private:
    bool isSelfDividing(int orgNum){
        int n = orgNum;

        while(n > 0){
            int rem = n %10;
            if(rem == 0 || orgNum%rem != 0) return false;
            n /= 10;
        }

        return true;
    }

public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i=left; i<=right; i++){
            if(isSelfDividing(i)) ans.push_back(i);
        }

        return ans;
    }
};
