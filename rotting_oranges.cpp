class Solution {
public:
    int n, m, ans;
    int dist[11][11];
    vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    bool valid(int ci, int cj) {
      return ci >= 0 && ci < n && cj >= 0 && cj < m;
    }

    void bfs(vector<vector<int>>& grid, int si, int sj, int t) {
      queue < pair<pair<int, int>, int>> q;
      q.push({{si,sj}, t});
      dist[si][sj] = 0;
      while(!q.empty()) {
        auto par = q.front();
        q.pop();
        int par_i = par.first.first;
        int par_j = par.first.second;
        int par_t = par.second;
        for (int i = 0; i < 4; i++) {
          int ci = par_i + moves[i].first;
          int cj = par_j + moves[i].second;
          if(valid(ci,cj) && grid[ci][cj]==1 && par_t+1<dist[ci][cj]) {
            dist[ci][cj] = par_t+1;
            q.push({{ci, cj}, par_t+1});
          }
        }
      }
    }

    int orangesRotting(vector<vector<int>>& grid) {
      n = grid.size();
      m = grid[0].size();
      ans = 0;
      bool ok = false;
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(grid[i][j]==1) ok = true;
          dist[i][j] = 1e9;
        }
      }
      if(!ok) return 0;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if(grid[i][j]==2) {
            bfs(grid,i, j, 0);
          }
        }
      }
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
          if(grid[i][j]==1) {
            if(dist[i][j]==1e9) return -1;
            ans = max(ans, dist[i][j]);
          }
        }
      }
      return ans;
    }
};