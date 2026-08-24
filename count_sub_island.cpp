class Solution {
public:
    int n, m;
    bool ok;
    bool vis[501][501];
    vector<pair<int, int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i, int j) {
      if(i<0 || i>=n || j<0 || j>=m) return false;
      return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
      vis[si][sj] = true;
      if(grid1[si][sj]==0) ok = false;
      for(int i = 0; i < 4; i++) {
        int ci = si+moves[i].first;
        int cj = sj+ moves[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && grid2[ci][cj]==1) {
          dfs(ci, cj, grid1, grid2);
        }
      }
    }

    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
      int cnt = 0;
      n = grid2.size();
      m = grid2[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && grid2[i][j]==1) {
            ok = true;
            dfs(i,j, grid1, grid2);
            if(ok) cnt++;
          }
        }
      }
      return cnt;
    }
};