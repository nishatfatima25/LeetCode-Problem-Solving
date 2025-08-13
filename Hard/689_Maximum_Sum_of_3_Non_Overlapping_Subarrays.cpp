// LeetCode Problem : 689. Maximum Sum of 3 Non - Overlapping Subarrays
// Link : https://leetcode.com/problems/maximum-sum-of-3-non-overlapping-subarrays/description/

class Solution {
public:
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> kSums(n - k + 1, 0);

    int currentSum = 0;
    for (int i = 0; i < k; ++i) {
        currentSum += nums[i];
    }
    kSums[0] = currentSum;

    for (int i = 1; i <= n - k; ++i) {
        currentSum = currentSum - nums[i - 1] + nums[i + k - 1];
        kSums[i] = currentSum;
    }

    vector<int> bestLeft(n - k + 1, 0);
    int bestIndex = 0;
    for (int i = 0; i < kSums.size(); ++i) {
        if (kSums[i] > kSums[bestIndex]) {
            bestIndex = i;
        }
        bestLeft[i] = bestIndex;
    }

    vector<int> bestRight(n - k + 1, 0);
    bestIndex = kSums.size() - 1;
    for (int i = kSums.size() - 1; i >= 0; --i) {
        if (kSums[i] >= kSums[bestIndex]) {
            bestIndex = i;
        }
        bestRight[i] = bestIndex;
    }

    int maxSum = 0;
    vector<int> result(3, -1);
    for (int j = k; j < kSums.size() - k; ++j) {
        int leftIdx = bestLeft[j - k];
        int rightIdx = bestRight[j + k];
        int totalSum = kSums[leftIdx] + kSums[j] + kSums[rightIdx];

        if (totalSum > maxSum) {
            maxSum = totalSum;
            result = {leftIdx, j, rightIdx};
        }
    }

    return result;
    }
};
