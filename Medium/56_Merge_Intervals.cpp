// LeetCode Problem : 56. Merge Intervals
// Link : https://leetcode.com/problems/merge-intervals/description/

// Brute Force

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        for(int i=0; i<intervals.size(); i++){
            int start = intervals[i][0];
            int end = intervals[i][1];
            
            //if ans arr in not empty and 
            //current value of end is less than or equal to end val of prev arr
            if(!ans.empty() && end<=ans.back()[1]) continue;

            for(int j=i+1; j<intervals.size(); j++){

                //if current value of start is less than the end val of prev element
                //then find the max val of the current end and prev end
                if(intervals[j][0] <= end){
                    end = max(end, intervals[j][1]);
                }

                //otherwise break out from loop
                else{
                    break;
                }
            }
            ans.push_back({start,end});
        }

        return ans;
    }
};

// Optimal Solution

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        for(int i=0; i<intervals.size(); i++){
            
            //if ans is empty or the current front element is greater than prev second el
            //then push it into ans
            if(ans.empty() || intervals[i][0] > ans.back()[1]){
                ans.push_back(intervals[i]);
            }

            //otherwise, expand the interval by checking second val of current element 
            //and second val of prev element
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }

        return ans;
    }
};
