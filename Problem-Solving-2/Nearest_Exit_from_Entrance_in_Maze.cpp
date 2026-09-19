class Solution {
public:
    int n, m;
    bool vis[101][101];
    int level[101][101];
    vector<pair<int,int>> moves = {{1,0}, {-1,0}, {0,1}, {0,-1}};

    bool valid(int ci, int cj) {
      return ci>=0 && ci<n && cj>=0 && cj<m;
    }

    int bfs(int si, int sj, vector<vector<char>>& maze) {
      queue<pair<int,int>> q;
      q.push({si,sj});
      vis[si][sj] = true;
      level[si][sj] = 0;
      while(!q.empty()) {
        pair<int,int> par = q.front();
        int pi = par.first, pj = par.second;
        q.pop();
        for(int i = 0; i< 4; i++) {
          int ci = pi+moves[i].first;
          int cj = pj+moves[i].second;
          if(!valid(ci,cj) && (pi!=si || pj!=sj)) return level[pi][pj];
          if(valid(ci,cj) && !vis[ci][cj] && maze[ci][cj]=='.') {
            q.push({ci,cj});
            vis[ci][cj] = true;
            level[ci][cj] = level[pi][pj]+1;
          }
        }
      }
      return -1;
    }

    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
      n = maze.size(), m = maze[0].size();
      int si = entrance[0], sj = entrance[1];
      memset(vis, false, sizeof(vis));
      return bfs(si, sj, maze);
    }
};