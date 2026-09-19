// Starting with the name of Almighty Allah
// Practice is the only shortcut to improve

#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;

//==================== TYPE ALIASES ====================//
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using i8 = __int128_t;
using ui8 = __uint128_t;

using pii = pair<int, int>;
using pll = pair<ll, ll>;

template<typename T>
using vc = vector<T>;

using vi = vc<int>;
using vl = vc<ll>;
using vpi = vc<pii>;
using vpl = vc<pll>;

//==================== CONSTANTS ====================//
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1000000007;
const ld PI = acosl(-1.0L);

//==================== MACROS ====================//
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define srt(v) sort(all(v))
#define rsrt(v) sort(rall(v))
#define rvs(v) reverse(all(v))
#define sz(x) (int)((x).size())
#define nl '\n'
#define cinv(v) for(auto &x : (v)) cin >> x
#define coutv(v) for(auto &x : (v)) cout << x << ' '; cout << nl
#define coutvl(v) for(auto &x : (v)) cout << x << nl
#define Yes cout << "YES" << nl
#define No cout << "NO" << nl
#define yes cout << "Yes" << nl
#define no cout << "No" << nl

//==================== FUNCTIONS ====================//
template<typename T>
T gcd(T a, T b) {
  while (b) {
    T t = a % b;
    a = b;
    b = t;
  }
  return a;
}

template<typename T>
T lcm(T a, T b) {
  return a / gcd(a, b) * b;
}

template<typename T>
bool ckmin(T &a, T b) {
  if (b < a) {
    a = b;
    return true;
  }
  return false;
}

template<typename T>
bool ckmax(T &a, T b) {
  if (b > a) {
    a = b;
    return true;
  }
  return false;
}

//==================== RANDOM ====================//
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int my_rand(int l, int r) {
  return uniform_int_distribution<int>(l, r)(rng);
}

int n, m;
char grid[1001][1001];
bool vis[1001][1001];
pair<int, int> parent[1001][1001];

vector<pair<int, int>> moves = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int ci, int cj) {
  return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

void bfs(int si, int sj) {
  queue<pair<int,int>> q;
  q.push({si, sj});
  vis[si][sj] = true;
  bool fnd = false;
  while(!q.empty()) {
    pair<int, int> par = q.front();
    q.pop();
    int par_i = par.first;
    int par_j = par.second;
    if(grid[par_i][par_j]=='D') break;
    for (int i = 0; i < 4; i++) {
      int ci = par_i + moves[i].first;
      int cj = par_j + moves[i].second;
      if(valid(ci,cj) && !vis[ci][cj] && ((grid[ci][cj]=='.') || grid[ci][cj]=='D')) {
        vis[ci][cj] = true;
        parent[ci][cj] = {par_i, par_j};
        q.push({ci, cj});
      }
    }
  }
}

void solve() {
  cin >> n >> m;
  int si = -1, sj = -1, di = -1, dj = -1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> grid[i][j];
      if(grid[i][j]=='R') {
        si = i;
        sj = j;
      } else if(grid[i][j]=='D') {
        di = i;
        dj = j;
      }
    }
  }
  memset(vis, false, sizeof(vis));
  memset(parent, -1, sizeof(parent));
  bfs(si, sj);
  if(vis[di][dj]) {
    int dr = di, dc = dj;
    while(1) {
      pair<int, int> par = parent[dr][dc];
      dr = par.first;
      dc = par.second;
      if(dr==-1 && dc ==-1) break;
      if(grid[dr][dc]!='R')
        grid[dr][dc] = 'X';
    }
  }

  for (int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++)
      cout << grid[i][j];
    cout << nl;
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}