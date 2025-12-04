// LeetCode Problem : 2211. Count Collisions on a Road
// Link : https://leetcode.com/problems/count-collisions-on-a-road/description/

class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int left = 0;
        int right = n - 1;

        while(left < n && directions[left] == 'L') left++;
        while(right >=0 && directions[right] == 'R') right--;

        int ans = 0;
        for(int i=left; i<=right; i++){
            ans += directions[i] != 'S';
        }

        return ans;
    }
};
