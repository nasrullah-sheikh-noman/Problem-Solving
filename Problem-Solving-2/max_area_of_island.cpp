class Solution {
public:
    int mx = 0, area;
    int m, n;
    bool vis[51][51];
    vector<pair<int, int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int si, int sj) {
      if(si<0 || si>=m || sj<0 || sj>=n) return false;
      return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
      vis[si][sj] = true;
      area++;
      for(int i = 0; i < 4; i++) {
        int ci = si + moves[i].first;
        int cj = sj + moves[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj]==1) {
          dfs(ci, cj, grid);
        }
      } 
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
      m = grid.size();
      n = grid[0].size();
      for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++) {
          if(!vis[i][j] && grid[i][j]==1) {
            area = 0;
            dfs(i, j, grid);
            mx = max(mx, area);
          }
        }
      }
      return mx;
    }
};