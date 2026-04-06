// LeetCode Problem : 3890. Integers With Multiple Sum of Two Cubes
// Link : https://leetcode.com/problems/integers-with-multiple-sum-of-two-cubes/description/

class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int,int> mpp;
        vector<int> arr;
        int temp;
        int val = cbrt(n);

        for(int i=1; i<=val; i++){
            for(int j=i; j<=val; j++){
                temp = (i*i*i) + (j*j*j);
                if(temp > n) break;
                else{
                    mpp[temp]++;
                    if(mpp[temp] == 2) arr.push_back(temp);
                }
            }
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};
