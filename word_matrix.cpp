class Solution {
public:
    int n, m;
    bool vis[6][6];
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int ci, int cj) {
      return ci >= 0 && ci<n && cj>=0 && cj<m;
    }

    bool dfs(int si, int sj, int i, vector<vector<char>>& board, string word) {
      if(i==word.size()) return true;
      if(!valid(si,sj) || vis[si][sj]) return false;
      if(board[si][sj]!=word[i]) return false;
      vis[si][sj] = true;
      for(int j = 0; j < 4; j++) {
        int ci = si+ moves[j].first;
        int cj = sj+ moves[j].second;
        if(dfs(ci,cj,i+1,board,word)) return true;
      }
      vis[si][sj] = false;
      return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
      n = board.size(), m = board[0].size();
      memset(vis, false, sizeof(vis));
      for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
          if(board[i][j]==word[0]) {
            if(dfs(i,j,0,board,word)) return true;
          }
        }
      }
      return false;
    }
};