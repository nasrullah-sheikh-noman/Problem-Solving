class Solution {
public:
    int n, m;
    vector<pair<int,int>> moves = {{0,-1}, {0,1}, {1,0}, {-1,0}};

    bool valid(int ci, int cj) {
      return ci>= 0 && ci<n && cj>=0 && cj<m;
    }

    void bfs(vector<vector<int>>& mat) {
      queue<pair<int,int>> q;
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(mat[i][j] == 0) q.push({i,j});
          else mat[i][j] = INT_MAX; 
        }
      }

      while(q.size()) {
        auto par = q.front();
        q.pop();
        int pi = par.first;
        int pj = par.second;
        for(int i = 0; i < 4; i++) {
          int ci = pi + moves[i].first;
          int cj = pj + moves[i].second;
          if(valid(ci,cj) && mat[ci][cj] == INT_MAX) {
            mat[ci][cj] = mat[pi][pj] + 1;
            q.push({ci, cj});
          }
        }
      }
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      n = mat.size(), m = mat[0].size();

      bfs(mat);
      
      return mat;
    }
};