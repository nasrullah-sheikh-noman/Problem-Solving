class Solution {
public:
    int n, m;
    bool vis[501][501];
    int cnt;
    bool ok;

    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i, int j) {
      return i>=0 && i<n && j>=0 && j<m;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
      vis[si][sj] = true;
      cnt++;
      for(int i = 0; i < 4; i++)  {
        int ci = si+moves[i].first;
        int cj = sj+moves[i].second;
        if(!valid(ci,cj)) ok = false;
        else if(!vis[ci][cj]  && grid[ci][cj]) {
          dfs(ci,cj, grid);
        }
      }
    }

    int numEnclaves(vector<vector<int>>& grid) {
      int ans = 0;
      n = grid.size();
      m = grid[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && grid[i][j]) {
            cnt = 0, ok = true;
            dfs(i,j,grid);
            if(ok) ans+=cnt;
          }
        }
      }
      return ans;
    }
};