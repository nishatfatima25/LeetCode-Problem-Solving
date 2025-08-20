// LeetCode Problem : 16. 3Sum CLosest
// Link : https://leetcode.com/problems/3sum-closest/description/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];
        int n = nums.size();

        for(int i=0; i<n-2; i++){
            int left = i+1;
            int right = n-1;

            while(left < right){
                int sum = nums[i]+nums[left]+nums[right];

                if (abs(sum-target) < abs(target - closestSum)){
                    closestSum = sum;
                }

                else if(sum < target) left++;
                else if(sum > target) right--;
                else return target;
            }
        }

        return closestSum;
    }
};
