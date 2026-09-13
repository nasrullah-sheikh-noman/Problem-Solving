// Starting with the name of Almighty Allah
// Practice is the only shortcut to improve

#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

int n;
char grid[31][31];
bool vis[31][31];
int dis[31][31];

vector<pair<int, int> > moves;


bool valid(int ci, int cj) {
  return ci >= 0 && ci < n && cj >= 0 && cj < n;
}

void bfs(int si, int sj) {
  queue<pair<int, int> > q;
  q.push({si, sj});
  vis[si][sj] = true;
  dis[si][sj] = 0;
  while(!q.empty()) {
    pair<int, int> p = q.front();
    q.pop();
    int pi = p.first;
    int pj = p.second;
    for(int i= 0; i < 4; i++) {
      int ci = pi + moves[i].first;
      int cj = pj + moves[i].second;
      if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj]!='T') {
        q.push({ci,cj});
        vis[ci][cj] = true;
        dis[ci][cj] = dis[pi][pj] + 1;
      }
    }
  }
}

void solve() {
  int si, sj, di, dj;
  moves.push_back({0, 1});
  moves.push_back({-1, 0});
  moves.push_back({1, 0});
  moves.push_back({0, -1});
  while (cin >> n) {
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    for (int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        cin >> grid[i][j];
        if(grid[i][j]=='S') {
          si = i;
          sj = j;
        }
        if(grid[i][j]=='E') {
          di = i;
          dj = j;
        }
      }
    }
    bfs(si, sj);
    cout << dis[di][dj] << endl;
  } 
}

int main() {

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}