class Solution {
public:
    int n;
    bool vis[101][101];
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int ci, int cj) {
      return ci>=0 && ci<n && cj>=0 && cj<n;
    }

    int shortest_dist(vector<vector<int>>& grid) {
      memset(vis, false, sizeof(vis));
      queue<pair<pair<int,int>,int>> q;
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
          if(grid[i][j]==1) {
            q.push({{i,j},0});
            vis[i][j] = true;
          }
        }
      }
      while(!q.empty()) {
        auto par = q.front();
        int pi = par.first.first;
        int pj = par.first.second;
        int dst = par.second;
        q.pop();
        for(int i = 0; i < 4; i++) {
          int ci = pi+moves[i].first;
          int cj = pj+moves[i].second;
          if(valid(ci,cj) && grid[ci][cj]==2) return dst;
          if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]!=1) {
            q.push({{ci,cj}, dst+1});
            vis[ci][cj] = true;
          }
        }
      }
      return 1;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
      vis[si][sj] = true;
      grid[si][sj] = 2;
      for(int i = 0; i < 4; i++) {
        int ci = si + moves[i].first;
        int cj = sj + moves[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==1) {
          dfs(ci,cj, grid);
        }
      }
    }

    int shortestBridge(vector<vector<int>>& grid) {
      n = grid.size();
      memset(vis, false, sizeof(vis));
      bool ok = false;
      for(int i = 0; i< n; i++) {
        for(int j= 0; j < n; j++) {
          if(grid[i][j]==1) {
            dfs(i,j,grid);
            ok = true;
            break;
          }
        }
        if(ok) break;
      }
      return shortest_dist(grid);
    }
};