// LeetCode Problem : 279. Perfect Squares
// Link : https://leetcode.com/problems/perfect-squares/description/

class Solution {
public:
    int numSquares(int n) {
        
        queue<int> q;
        vector<bool> visited(n+1,false);

        q.push(n);
        visited[n] = true;
        int lev = 0;

        while(!q.empty()){
            int size = q.size();
            lev++;

            while(size--){
                int val = q.front();
                q.pop();

                for(int i=1; i*i <= val; i++){
                    int next = val-i*i;
                    if(next == 0) return lev;

                    if(!visited[next]){
                        visited[next] = true;
                        q.push(next);
                    }
                }
            }
        }

        return lev;
    }
};
