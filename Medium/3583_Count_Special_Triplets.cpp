// LeetCode Problem : 3583. Count Special Triplets
// Link : https://leetcode.com/problems/count-special-triplets/description/

class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        long long count[100001] = {0};
        long long pair[100001] = {0};
        long long tup = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0) tup += pair[nums[i]/2];
            if(nums[i]*2 <= 100000) pair[nums[i]] += count[nums[i]*2];
            count[nums[i]]++;
        }

        return tup%1000000007;
    }
};
