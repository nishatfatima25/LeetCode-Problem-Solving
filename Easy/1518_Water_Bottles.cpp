// LeetCode Problem : 1518. Water Bottles
// Link : https://leetcode.com/problems/water-bottles/description/

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

    int a = numBottles;
    int b = numExchange;

    int ans=a;

    while(a/b){

    ans+= a/b;
    int c = a%b;
    a = a/b + a%b;


    }
  return ans;



    }
};
