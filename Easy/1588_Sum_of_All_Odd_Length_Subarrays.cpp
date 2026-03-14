// LeetCode Problem : 1588. Sum of All Odd Length Subarrays
// Link : https://leetcode.com/problems/sum-of-all-odd-length-subarrays/description/

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;

        for(int i=0; i<arr.size(); i++){
            int sum = 0;
            for(int j=i; j<arr.size(); j++){
                sum += arr[j];

                if((j-i+1) % 2 == 1) ans += sum;
            }
        }

        return ans;
    }
};
