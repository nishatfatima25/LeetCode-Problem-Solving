// LeetCode Problem : 1524. Number of Sub-arrays With Odd Sum
// Link : https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/description/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int mod = 1e9+7;
        int count = 0;
        int sum  =0;
        int odd = 0;
        int even = 1;

        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
            if(sum % 2 == 0){
                count = (count+odd)%mod;
                even++;
            }
            else{
                count = (count+even)%mod;
                odd++;
            }
        }

        return count % mod;
    }
};
