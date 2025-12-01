// LeetCode Problem : 3761. Minimum Absolute Distance Between Mirror Pairs
// Link : https://leetcode.com/problems/minimum-absolute-distance-between-mirror-pairs/description/

class Solution {
public:

    int reverse(int num){
        int b =0;

        while(num > 0){
            int rem = num%10;
            b = b*10 + rem;
            num /= 10;
        }

        return b;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        int n = nums.size();
        int ans = n;

        for(int i=0; i<n; i++){
            if(mpp.count(nums[i])) ans = min(ans,i-mpp[nums[i]]);
            mpp[reverse(nums[i])] = i;
        }

        if(ans < n) return ans;

        return -1;
    }
};
