// LeetCode Problem : 560. Subarray Sum Equals k
// Link : https://leetcode.com/problems/subarray-sum-equals-k/description/

// Brute Force
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        

        int sum;
        int count = 0;

        for(int i=0; i<nums.size(); i++){
            
            sum = nums[i];

            if(sum==k ){
                count++;
            }
            
            for(int j=i+1; j<nums.size(); j++){
                sum += nums[j];

                if(sum == k){
                    count++;
                } 
            }
        }

        return count;
    }
};


// Optimal
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0] = 1;

        int preSum =0, count=0;
        for(int i=0; i<nums.size(); i++){
            preSum += nums[i];
            int remove = preSum - k;
            count += mpp[remove];
            mpp[preSum] += 1;
        }

        return count;
    }  
};
