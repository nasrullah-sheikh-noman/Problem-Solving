class Solution {
public:
    int n, m;
    bool vis[202][201];
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i, int j) {
      if(i<0 || i>=n || j<0 || j>=m) return false;
      return true;
    }

    void dfs(int si, int sj, vector<vector<char>>& board) {
      vis[si][sj] = true;
      for(int i = 0; i < 4; i++) {
        int ci = si + moves[i].first;
        int cj = sj+ moves[i].second;
        if(valid(ci,cj) && !vis[ci][cj] && board[ci][cj]=='O') {
          dfs(ci, cj, board);
        }
      }
    }

    void solve(vector<vector<char>>& board) {
      n = board.size();
      m = board[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && board[i][j]=='O' && (i==0 || i==n-1 || j==0 || j==m-1)) {
            dfs(i,j,board);
          }
        }
      }
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(board[i][j]=='O' && !vis[i][j]) 
            board[i][j] = 'X';
        }
      }
    }
};