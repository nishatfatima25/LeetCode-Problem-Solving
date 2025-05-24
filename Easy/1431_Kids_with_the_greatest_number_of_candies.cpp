// LeetCode Problem : 1431. Kids With the Greatest Number of Candies
// Link : https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = candies.size();
        int maxi=0;
        vector<bool> answer(m);
        for(int i=0; i<m;i++){
            if(candies[i]>maxi){
                maxi = candies[i];
            }
        }
        for(int i=0;i<m;i++){
            if(candies[i]+extraCandies >= maxi){
                answer[i]=true;
            }
            else{
                answer[i]=false;
            }
        }
        return answer;
    }
};
