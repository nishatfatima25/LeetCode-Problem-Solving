// LeetCode Problem : 3927. Minimize Array Sum Using Divisible Replacements
// Link : https://leetcode.com/problems/minimize-array-sum-using-divisible-replacements/description/

class Solution {
public:
    long long minArraySum(vector<int>& nums) {
        long long ans = 0;
        vector<int> arr;
        sort(nums.begin(),nums.end());

        for(auto it : nums){
            if(arr.empty()){
                arr.push_back(it);
                ans += it;
                continue;
            }

            bool flag = 1;
            int x = it;
            for(auto it2 : arr){
                if(it % it2 == 0){
                    x = it2;
                    flag =0;
                    break;
                }
            }

            if(flag) arr.push_back(it);
            ans += x;
        }

        return ans;
    }
};
