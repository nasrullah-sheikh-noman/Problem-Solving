class Solution {
public:
    int n, m;
    bool vis[301][301];
    vector<pair<int, int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i, int j) {
      if(i<0 || i>=n || j<0 || j>=m) return false;
      return true;
    }

    void dfs(int si, int sj, vector<vector<char>>& grid) {
      vis[si][sj] = true;
      for(int i = 0; i < 4; i++) {
        int ci = si+moves[i].first;
        int cj = sj+moves[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj]=='1') {
          dfs(ci, cj, grid);
        }
      }
    }

    int numIslands(vector<vector<char>>& grid) {
      int cnt = 0;
      n = grid.size();
      m = grid[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && grid[i][j]=='1') {
            cnt++;
            dfs(i, j, grid);
          }
        }
      }
      return cnt;
    }
};