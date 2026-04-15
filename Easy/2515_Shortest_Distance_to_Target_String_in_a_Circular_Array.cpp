// LeetCode Problem : 2515. Shortest Distance to Target String in a Circular Array
// Link : https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/description/

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();

        for(int i=0; i<n; i++){
            int left = (startIndex+i) % n;
            int right = (startIndex-i+n) % n;

            if(words[right] == target || words[left] == target) return i;
        }

        return -1;
    }
};
