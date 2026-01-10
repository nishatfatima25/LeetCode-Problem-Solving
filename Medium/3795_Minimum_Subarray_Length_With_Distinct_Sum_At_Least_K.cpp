// LeetCode Link : 3795. Minimum Subarray Length With Distinct Sum At Least K 
// Link : https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k/description/

class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        int mini = INT_MAX;
        long long sum =0;

        int left =0, right =0 , n = nums.size();

        while(right < n){
            if(freq[nums[right]] == 0) sum += nums[right];

            freq[nums[right]]++;

            while(sum >=k){
                mini = min(mini, right-left+1);

                freq[nums[left]]--;
                if(freq[nums[left]] == 0) sum -= nums[left];
                left++;
            }
            right++;
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};
