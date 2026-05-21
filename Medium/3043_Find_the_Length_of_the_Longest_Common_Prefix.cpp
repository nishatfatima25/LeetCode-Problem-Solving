// LeetCode Problem : 3043. Find the Length of the Longest Common Prefix
// Link : https://leetcode.com/problems/find-the-length-of-the-longest-common-prefix/description/

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> st;

        for(int i=0; i<arr1.size(); i++){
            while(arr1[i] > 0){
                st.insert(arr1[i]);
                arr1[i] /= 10;
            }
        }

        int ans =0;
        for(int i=0; i<arr2.size(); i++){
            int val = arr2[i];
            int l = to_string(val).size();

            while(val > 0){
                if(st.count(val)){
                    ans = max(l,ans);
                    break;
                }
                val /= 10;
                l--;
            }
        }

        return ans;
    }
};
