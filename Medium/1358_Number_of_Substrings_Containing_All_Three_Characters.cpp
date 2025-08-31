// LeetCode Problem : 1358. Number of Substrings Containing All Three Characters
// Link : https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int left=0,right=0;
        int count=0;
        vector<int> hash(3,0);

        while(right < n){
            hash[s[right]-'a']++;

            while(hash[0] >0 && hash[1] > 0 && hash[2] > 0){
                count += n-right;
                hash[s[left]-'a']--;
                left++;
            }

            right++;
        }

        return count;
    }
};
