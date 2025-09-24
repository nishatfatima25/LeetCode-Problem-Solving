// LeetCode Problem : 3683. Earliest Time to Finish One Task
// Link : https://leetcode.com/problems/earliest-time-to-finish-one-task/description/

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int row = tasks.size();
        int col = tasks[0].size();

        int mini = INT_MAX;

        for(int i=0; i<row; i++){
            int sum =0;

            for(int j=0; j<col; j++){
                sum += tasks[i][j];
            }

            mini = min(mini,sum);
        }

        return mini;
    }
};

// method-2

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini = INT_MAX;

        for(auto x : tasks){
            int val1 = x[0];
            int val2 = x[1];
            mini = min(mini,(val1+val2));
        }

        return mini;
    }
};
