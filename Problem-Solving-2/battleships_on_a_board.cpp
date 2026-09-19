class Solution {
public:
    int n, m, cnt;
    bool vis[201][201];
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int i, int j) {
      if(i<0 || i>=n || j<0 || j>=m) return false;
      return true;
    }

    void dfs(int si, int sj, vector<vector<char>>& board) {
      vis[si][sj] = true;
      for(int i = 0; i < 4; i++)  {
        int ci = si+moves[i].first;
        int cj = sj+moves[i].second;
        if(valid(ci, cj) && !vis[ci][cj] && board[ci][cj]=='X') {
          dfs(ci,cj, board);
        }
      }
    }

    int countBattleships(vector<vector<char>>& board) {
      n = board.size();
      m = board[0].size();
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(!vis[i][j] && board[i][j]=='X') {
            dfs(i, j, board);
            cnt++;
          }
        }
      }
      return cnt;
    }
};