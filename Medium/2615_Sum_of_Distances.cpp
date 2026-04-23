// LeetCode Problem : 2615. Sum of Distances
// Link : https://leetcode.com/problems/sum-of-distances/description/

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        int n = nums.size();
        vector<long long> arr(n,0);

        unordered_map<int,long long> idxSum;
        unordered_map<int,long long> idxCount;

        for(int i=0; i<n; i++){
            long long freq = idxCount[nums[i]];
            long long sum = idxSum[nums[i]];

            arr[i] += freq*i-sum;
            idxCount[nums[i]] += 1;
            idxSum[nums[i]] += i;
        }
        idxCount.clear();
        idxSum.clear();

        for(int i=n-1; i>=0; i--){
            long long freq = idxCount[nums[i]];
            long long sum = idxSum[nums[i]];

            arr[i] += sum-freq*i;
            idxCount[nums[i]] += 1;
            idxSum[nums[i]] += i;
        }

        return arr;
    }
};
