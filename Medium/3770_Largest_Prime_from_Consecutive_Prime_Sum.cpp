// LeetCode Problem : 3770. Largest Prime from Consecutive Prime Sum
// Link : https://leetcode.com/problems/largest-prime-from-consecutive-prime-sum/description/

class Solution {

public:
    int largestPrime(int n) {

        vector<bool> prime(n+1,true);
        prime[0] = prime[1] = false;

        for(int i=2; i*i <=n; i++){
            if(prime[i]){
                for(int j = i*i; j<=n; j +=i) prime[j] = false;
            }
        }

        int sum =0;
        int ans =0;

        vector<int> primes;
        for(int i=2; i<=n; i++){
            if(prime[i]) primes.push_back(i);
        }

        for(int p : primes){
            sum += p;
            if(sum > n) break;
            if(prime[sum]) ans = sum;
        }

        return ans;
    }
};
