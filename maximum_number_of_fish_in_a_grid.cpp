//  DFS 
class Solution {
public:
    int n, m, mx = 0, cnt = 0;
    bool vis[11][11];
    vector<pair<int, int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i,int j) {
      if(i<0 || i>=n || j<0 || j>=m) return false;
      return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
      vis[si][sj] = true;
      if(grid[si][sj]>0) cnt+=grid[si][sj];
      for(int i = 0; i < 4; i++) {
        int ci = si+ moves[i].first;
        int cj = sj+moves[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]>0) {
          dfs(ci, cj, grid);
        }
      }
    }

    int findMaxFish(vector<vector<int>>& grid) {
      n = grid.size();
      m = grid[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && grid[i][j]>0) {
            cnt = 0;
            dfs(i,j, grid);
            mx = max(mx, cnt);
          }
        }
      }
      return mx;
    }
};

// BFS
class Solution {
public:
    int n, m, mx = 0, cnt = 0;
    bool vis[11][11];
    vector<pair<int, int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i,int j) {
      if(i<0 || i>=n || j<0 || j>=m) return false;
      return true;
    }

    void bfs(int si, int sj, vector<vector<int>>& grid) {
      queue<pair<int,int>> q;
      q.push({si,sj});
      vis[si][sj] = true;
      if(grid[si][sj]>0) cnt+=grid[si][sj];
      while(!q.empty()) {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for(int i = 0; i < 4; i++) {
          int ci = par_i + moves[i].first;
          int cj = par_j + moves[i].second;
          if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]>0) {
            q.push({ci,cj});
            if(grid[ci][cj]>0) cnt+=grid[ci][cj];
            vis[ci][cj] = true;
          }
        }
      }
    }

    int findMaxFish(vector<vector<int>>& grid) {
      n = grid.size();
      m = grid[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && grid[i][j]>0) {
            cnt = 0;
            bfs(i,j, grid);
            mx = max(mx, cnt);
          }
        }
      }
      return mx;
    }
};