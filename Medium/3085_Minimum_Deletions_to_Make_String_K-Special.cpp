// LeetCode Problem : 3085. Minimum Deletions to Make String K-Special
// Link : https://leetcode.com/problems/minimum-deletions-to-make-string-k-special/description/

class Solution {
public:
    int minimumDeletions(string word, int k) {
        vector<int> freq(26,0);
        int n = word.size(),j;
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            freq[word[i] - 'a']++;
        }

        freq.erase(remove(freq.begin(), freq.end(),0) , freq.end());

        if(freq.size()==0) return j;
        sort(freq.begin(), freq.end(), greater<int>());

        for(int i=0; i<freq.size(); i++){
            int x =0;
            for(int j=0; j<freq.size(); j++){
                if(freq[j] > freq[i] + k){
                    x = x+ freq[j] - (freq[i]+k);
                }
                else if(freq[j] < freq[i]){
                    x = x+freq[j];
                }
            }

            ans = min(ans,x);
        }
        return ans;
    }
};
