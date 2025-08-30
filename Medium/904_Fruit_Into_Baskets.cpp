// LeetCode Problem : 904. Fruit Into Basket
// Link : https://leetcode.com/problems/fruit-into-baskets/description/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        
        int size = fruits.size();
        int left=0,right=0;
        int maxLen=0;
        unordered_map<int,int> mpp;

        while(right < size){
            mpp[fruits[right]]++;

            if(mpp.size() > 2){

                if(mpp.size()>2){
                     mpp[fruits[left]]--;

                    if(mpp[fruits[left]] == 0){
                        mpp.erase(fruits[left]);
                    }
                    left++;
                }
            }

            if(mpp.size() <= 2){
                int len = right - left + 1;
                maxLen = max(len,maxLen);
            }

            right++;
        }

        return maxLen;
    }
};
