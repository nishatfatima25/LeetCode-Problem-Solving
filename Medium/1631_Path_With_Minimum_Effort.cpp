// LeetCode Problem : 1631. Path With Minimum Effort
// Link : https://leetcode.com/problems/path-with-minimum-effort/description/

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {

        int n = heights.size();
        int m = heights[0].size();

        //{diff,{row,col}}
        set<pair<int, pair<int, int>>> st;

        // distance matrix
        vector<vector<int>> dist(n, vector<int>(m, 1e9));
        dist[0][0] = 0;
        st.insert({0, {0, 0}});

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        while (!st.empty()) {

            auto it = *(st.begin());
            st.erase(st.begin());

            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;

            // if dest is reached
            if (row == n - 1 && col == m - 1)
                return diff;

            for (int i = 0; i < 4; i++) {
                int newr = row + drow[i];
                int newc = col + dcol[i];

                if (newr >= 0 && newr < n && newc >= 0 && newc < m) {
                    int newEffort =
                        max(abs(heights[row][col] - heights[newr][newc]), diff);

                    if (newEffort < dist[newr][newc]) {

                        // if this node already exists with a higher effort
                        // remove it

                        if (dist[newr][newc] != 1e9)
                            st.erase({dist[newr][newc], {newr, newc}});

                        dist[newr][newc] = newEffort;
                        st.insert({newEffort, {newr, newc}});
                    }
                }
            }
        }
        return 0;
    }
};
