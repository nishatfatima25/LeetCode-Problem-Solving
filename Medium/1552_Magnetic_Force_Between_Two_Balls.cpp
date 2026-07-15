// LeetCode Problem : 1552. Magnetic Force Between Two Balls
// Link : https://leetcode.com/problems/magnetic-force-between-two-balls/description/

class Solution {
public:

    bool isPossible(vector<int>& arr, int m, int val){
        int k=1;
        int lastPos = arr[0];

        for(int i=1; i<arr.size(); i++){
            int dist = arr[i] - lastPos;

            if(dist >= val){
                k++;
                lastPos = arr[i];
            }

            if(k == m) return true;
        }

        return false;
    }
    int maxDistance(vector<int>& arr, int m) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int low = 1;
        int high = arr[n-1] - arr[0];
        int ans = -1;

        while(low <= high){
            int mid = (low+high)/2;
            
            if(isPossible(arr,m,mid)){
                ans = mid;
                low = mid+1;
            }
            else high = mid - 1;
        }

        return ans;
    }
};
