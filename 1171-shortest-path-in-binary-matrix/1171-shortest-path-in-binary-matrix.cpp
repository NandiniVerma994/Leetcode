class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        //here we are checking from 0 to 0 not from 1
        if (n == 1 && m == 1 && grid[0][0] == 0) return 1;
        if(n == 0 || grid[0][0] == 1 || grid[n-1][n-1] == 1) return -1;
        
        vector<vector<int>> dist(n,vector<int>(m, 1e9));
        //distance, {row, col}
        queue<pair<int, pair<int,int>>> q;
        dist[0][0] = 1;
        q.push({1,{0,0}});
        int dr[] = {0,1,-1,0,1,-1,1,-1};
        int dc[] = {1,0,0,-1,1,1,-1,-1};
        while(!q.empty()) {
            auto it = q.front();
            q.pop();
            int dis = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            for(int i=0; i<8; i++) {
                int nrow = row + dr[i];
                int ncol = col + dc[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 0 && dis + 1 < dist[nrow][ncol]) {
                    dist[nrow][ncol] = dis + 1;
                    if(nrow == n-1 && ncol == m-1) {
                        return dis + 1;
                    }

                    q.push({1 + dis, {nrow, ncol}});
                }
            }
        }
        return -1;
    }
};