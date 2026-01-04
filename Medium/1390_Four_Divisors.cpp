// LeetCode Problem : 1390. Four Divisors
// Link : https://leetcode.com/problems/four-divisors/description/

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        int ans=0;

        for(int val : nums){
            int count =0;
            int sum =0;

            for(int i=1; i*i<=val; i++){
                if(val%i == 0){
                    int j = val/i;

                    count++;
                    sum += i;

                    if(i !=j){
                        count++;
                        sum += j;
                    }

                    if(count > 4) break;
                }
            }

            if(count == 4) ans += sum;
        }

        return ans;
    }
};
