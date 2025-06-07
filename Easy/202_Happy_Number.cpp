// LeetCode Problem : Happy Number
// Link : https://leetcode.com/problems/happy-number/description/

class Solution {
public:

    int NextNum(int n){
        int ans =0;

        while(n>0){
            int rem = n%10;
            ans += rem*rem;
            n = n/10;
        }

        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int> visited;

        while(visited.find(n) == visited.end()){
            visited.insert(n);

            n = NextNum(n);
            if(n==1){
                return true;
            }
        }

        return false;
    }
};
