// LeetCode Problem " 4. Median of Two Sorted Arrays
// Link : https://leetcode.com/problems/median-of-two-sorted-arrays/description/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }

        int m = nums1.size();
        int n = nums2.size();
        
        int low = 0, high = m;
        
        while (low <= high) {
            int partition1 = low + (high - low) / 2;  
            int partition2 = (m + n + 1) / 2 - partition1;  

            
            int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];
            
            int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];

            
            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                
                if ((m + n) % 2 != 0) {
                    return max(maxLeft1, maxLeft2);
                }
                
                else {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                }
            } else if (maxLeft1 > minRight2) {
                high = partition1 - 1;  
            } else {
                low = partition1 + 1;  
            }
        }

        
        return 0.0;
    }
};
