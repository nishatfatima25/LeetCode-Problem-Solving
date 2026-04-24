// LeetCode Problem : 2833. Furthest Point From Origin
// Link : https://leetcode.com/problems/furthest-point-from-origin/description/

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        int blank = 0;

        for(int i=0; i<moves.size(); i++){
            if(moves[i] == 'L') left++;
            else if(moves[i] == 'R') right++;
            else blank++;
        }

        int ans = abs(left-right) + blank;
        return ans;
    }
};
