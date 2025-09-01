// LeetCode Problem : 992. Subarrays with K Different Integers
// Link : https://leetcode.com/problems/subarrays-with-k-different-integers/description/

class Solution {
public:

    int subArrayWithAtmostK(vector<int>& nums, int k){
        int left=0, right=0, count=0;
        unordered_map<int,int> hash;

        while(right < nums.size()){

            hash[nums[right]]++;

            while(hash.size() > k){

                hash[nums[left]]--;

                if(hash[nums[left]] == 0){
                    hash.erase(nums[left]);
                }

                left++;
            }

            count += right-left+1;

            right++;
        }

        return count;
    }

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return subArrayWithAtmostK(nums,k) - subArrayWithAtmostK(nums,k-1);
    }
};
