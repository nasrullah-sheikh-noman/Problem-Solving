///  beats 100%
class Solution {
public:
    int n, m;
    bool DFS(int i, int j, vector<vector<int>>& grid) {
      if(i<0 || i>=n || j<0 || j>=m) return false;
      if(grid[i][j]==1) return true;
      grid[i][j] = 1;
      bool left = DFS(i, j-1, grid), right = DFS(i, j+1, grid), up = DFS(i-1,j, grid), down = DFS(i+1,j, grid);
      return left && right && up && down;
    }
    int closedIsland(vector<vector<int>>& grid) {
      n = grid.size();
      m = grid[0].size();
      int cnt = 0;
      for(int i = 1; i < n-1; i++) {
        for(int j = 1; j < m-1; j++) {
          if(grid[i][j]==0 && DFS(i, j, grid)) {
            cnt++;
          }
        }
      }
      return cnt;
    }
};

/// beats 12% (DFS)
class Solution {
public:
    int n, m;
    bool vis[101][101];
    bool ok = true;
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i, int j) {
      if(i<0 || i>=n || j<0 || j >=m) return false;
      return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
      vis[si][sj] = true;
      for(int i =0; i < 4; i++) {
        int ci = si + moves[i].first;
        int cj = sj + moves[i].second;
        if(!valid(ci, cj)) ok = false;
        if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj]==0) {
          dfs(ci,cj, grid);
        }
      }
    }

    int closedIsland(vector<vector<int>>& grid) {
      int cnt = 0;
      n = grid.size();
      m = grid[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && grid[i][j]==0) {
            ok = true;
            dfs(i,j, grid);
            if(ok) cnt++;
          }
        }
      }
      return cnt;
    }
};

/// BFS
class Solution {
public:
    int n, m;
    bool ok ;
    bool vis[101][101];
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i, int j) {
      if(i<0 || i>=n || j <0 || j>=m) return false;
      return true;
    }

    void bfs(int si, int sj, vector<vector<int>>& grid) {
      queue<pair<int,int>> q;
      q.push({si,sj});
      vis[si][sj] = true;
      while(!q.empty()) {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for(int i = 0; i < 4; i++) {
          int ci = par_i+moves[i].first;
          int cj = par_j+moves[i].second;
          if(!valid(ci, cj)) ok = false;
          if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==0) {
            q.push({ci,cj});
            vis[ci][cj] = true;
          }
        }
      }
    }


    int closedIsland(vector<vector<int>>& grid) {
      int cnt = 0;
      n = grid.size();
      m = grid[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && grid[i][j]==0) {
            ok = true;
            bfs(i,j,grid);
            if(ok) cnt++;
          }
        }
      }
      return cnt;
    }
};