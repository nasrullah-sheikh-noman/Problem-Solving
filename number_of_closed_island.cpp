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