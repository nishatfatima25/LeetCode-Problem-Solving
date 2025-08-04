// LeetCode Problem : 1539. Kth Missing Positive Number
// Link : https://leetcode.com/problems/kth-missing-positive-number/description/

// Brute Force
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int i=0; i<arr.size(); i++){
            if(arr[i] <= k){
                k++;
            }
            else break;
        }

        return k;
    }
};

// Optimal
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int low = 0;
        int high = arr.size() - 1;

        while(low <= high){
            int mid = (low+high)/2;

            int missing = arr[mid] - (mid+1);

            if(missing < k) low = mid+1;
            else high = mid-1;
        }

        return high+1+k; //or  low+k
    }
};
