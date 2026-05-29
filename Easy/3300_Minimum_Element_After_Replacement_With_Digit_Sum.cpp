// LeetCode Problem : 3300. Minimum Element After Replacement With Digit Sum
// Link : https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/description/

class Solution {
public:

    int digitSum(int n){
        int sum =0;

        while(n != 0){
            int rem = n%10;
            sum += rem;
            n /=10;
        }

        return sum;
    }
    
    int minElement(vector<int>& nums) {
        
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            arr.push_back(digitSum(nums[i]));
        }

        int ans = *min_element(arr.begin(),arr.end());
        return ans;
    }
};
