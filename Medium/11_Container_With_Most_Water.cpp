// LeetCode Problem : 11. Container With Most Water
// Link : https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size() - 1;
        int ans=0;

        while(left < right){
            int val = (right-left) * min(height[left],height[right]);
            ans = max(ans,val);

            if(height[left] < height[right]) left++;
            else right--;
        }

        return ans;
    }
};
