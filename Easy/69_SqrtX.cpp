// LeetCode Problem : 69. Sqrt(x)
// Link : https://leetcode.com/problems/sqrtx/description/

class Solution {
public:
    int mySqrt(int x) {
        int l=1, h = x;
        while(l<=h){
            long long mid = l+ (h-l)/2;
            long long ans = mid*mid;
            if(ans<=x){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return h;
    }
};
