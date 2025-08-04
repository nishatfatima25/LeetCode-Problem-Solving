// LeetCode Problem : 1283. Find the Smallest Divisor Given a Threshold
// Link : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/

class Solution {
public:

    int sumOfElements(vector<int> &nums, int div){
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum += ceil((double)(nums[i]) / (double)(div));
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low =1;
        int high = *max_element(nums.begin(), nums.end());

        if(nums.size() > threshold) return -1;

        while(low<=high){
            int mid = (low+high)/2;

            int val = sumOfElements(nums,mid);

            if(val > threshold){
               low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        return low;
    }
};
