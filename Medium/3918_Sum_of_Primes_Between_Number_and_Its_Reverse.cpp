// LeetCode Problem : 3918. Sum of Primes Between Number and Its Reverse
// Link : https://leetcode.com/problems/sum-of-primes-between-number-and-its-reverse/description/

class Solution {
public:

    bool isPrime(int n){
        if(n <= 1) return false;
        for(int i=2; i*i <=n; i++){
            if(n%i == 0){
                return false;
                break;
            }
        }
        return true;
    }

    int sumOfPrimesInRange(int n) {
        string rev = to_string(n);
        reverse(rev.begin(),rev.end());
        int revNum = stoi(rev);

        int start = min(n,revNum);
        int end = max(n,revNum);

        int sum =0;
        for(int i=start; i<= end; i++){
            if(isPrime(i)) sum += i;
        }

        return sum;
    }
};
