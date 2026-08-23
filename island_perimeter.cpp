class Solution {
public:
    int n, m, cnt;
    bool vis[101][101];
    vector<pair<int, int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int ci, int cj) {
      if(ci<0 || ci>=n || cj<0 || cj>=m) return false;
      return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid) {
      vis[si][sj] = true;
      for(int i = 0; i < 4; i++) {
        int ci = si+ moves[i].first;
        int cj = sj +moves[i].second;
        if(!valid(ci, cj))
          cnt++;
        else if(valid(ci, cj) && grid[ci][cj]==0) 
          cnt++;
        else if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj]==1) 
          dfs(ci, cj, grid);
      }
    }

    int islandPerimeter(vector<vector<int>>& grid) {
      cnt = 0;
      n = grid.size();
      m = grid[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && grid[i][j]==1) 
            dfs(i, j, grid);
        }
      }
      return cnt;
    }
};