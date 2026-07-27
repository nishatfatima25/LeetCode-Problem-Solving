// LeetCode Problem : 1464. Maximum Product of Two Elements in an Array
// Link : https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int largest = INT_MIN;
        int secondLargest = INT_MIN;
        for (int x : nums) {
            if (x >= largest) {
                secondLargest = largest;
                largest = x;
            } else if (x > secondLargest) secondLargest = x;
        }

        return (largest-1)*(secondLargest-1);
    }
};
