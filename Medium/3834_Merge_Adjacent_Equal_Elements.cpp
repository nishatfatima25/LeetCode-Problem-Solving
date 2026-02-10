// LeetCode Problem : 3834. Merge Adjacent Equal Elements
// Link : https://leetcode.com/problems/merge-adjacent-equal-elements/description/

class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        
        vector<long long> arr;
        
        for(long long num : nums){
            arr.push_back(num);

            while(arr.size() >=2){
                int n = arr.size();

                if(arr[n-1] == arr[n-2]){
                    long long sum = arr[n-1] + arr[n-2];
                    arr.pop_back();
                    arr.pop_back();
                    arr.push_back(sum);
                }
                else break;
            }
        }

        return arr;
    }
};
