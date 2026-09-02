int n, m, ans;
bool vis[100001][100001];
vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int ci, int cj) {
  return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

void bfs(vector<vector<int>>& grid, int si, int sj, int t) {
  queue < pair<pair<int, int>, int>> q;
  q.push({{si,sj}, t});
  vis[si][sj] = true;
  while(!q.empty()) {
    auto par = q.front();
    q.pop();
    int par_i = par.first.first;
    int par_j = par.first.second;
    int par_t = par.second;
    for (int i = 0; i < 4; i++) {
      int ci = par_i + moves[i].first;
      int cj = par_j + moves[i].second;
      if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]==1) {
        vis[ci][cj] = true;
        par_t++;
        q.push({{ci, cj}, par_t});
        ans = max(ans, par_t);
      }
    }
  }
}

n = grid.size();
m = grid[0].size();
ans = 0;
memset(vis, false, sizeof(vis));
for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
    if(!vis[i][j] && grid[i][j]==2) {
      bfs(grid,i, j, 0)
    }
  }
}
for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
    if(!vis[i][j] && grid[i][j]==1)
      return -1;
  }
}
return ans;