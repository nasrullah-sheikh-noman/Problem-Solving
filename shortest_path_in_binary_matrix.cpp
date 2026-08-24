class Solution {
public:
    int n;
    int level[101][101];
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}, {1,1}, {-1,1}, {1,-1}, {-1,-1}};

    bool valid(int i, int j) {
      return i>=0 && i<n && j>=0 && j<n;
    }

    void bfs(int si, int sj, vector<vector<int>>& grid) {
      queue<pair<int,int>> q;
      q.push({si,sj});
      level[si][sj] = 1;
      while(!q.empty()) {
        pair<int,int> p = q.front();
        q.pop();
        int pi = p.first;
        int pj = p.second;
        for(int i = 0; i < 8; i++) {
          int ci = pi + moves[i].first;
          int cj = pj + moves[i].second;
          if(valid(ci,cj) && level[ci][cj]==-1 && grid[ci][cj]==0) {
            q.push({ci,cj});
            level[ci][cj] = level[pi][pj]+1;
          }
        }
      }

    }

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
      n = grid.size();
      memset(level, -1, sizeof(level));
      if(grid[0][0]==0) {
        bfs(0,0,grid);
      }
      return level[n-1][n-1];
    }
};