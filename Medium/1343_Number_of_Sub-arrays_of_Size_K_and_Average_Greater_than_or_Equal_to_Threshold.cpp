// LeetCode Problem : 1343. Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold
// Link : https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/description/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int start = 0, end = k, count = 0, sum=0;
        for(int i=0; i<k; i++) sum += arr[i];
        if(sum >= k*threshold) count++;
        //int ans = count;

        while(end < arr.size()){
            sum += arr[end]-arr[start];
            if(sum >= k*threshold) count++;

            start++;
            end++;
        }
        return count;
    }
};
