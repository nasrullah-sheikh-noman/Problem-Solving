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
char parent[1001][1001];
vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
char dir[] = {'D', 'U', 'R', 'L'};

bool valid(int ci, int cj) {
  return ci >= 0 && ci < n && cj >= 0 && cj < m;
}

void BFS(int si, int sj) {
  queue<pair<int, int>> q;
  q.push({si, sj});
  vis[si][sj] = true;
  while(q.size()) {
    auto par = q.front();
    q.pop();
    int pi = par.first;
    int pj = par.second;
    for (int i = 0; i < 4; i++) {
      int ci = pi + moves[i].first;
      int cj = pj + moves[i].second;
      if(valid(ci,cj) && !vis[ci][cj] && grid[ci][cj]!='#') {
        q.push({ci, cj});
        vis[ci][cj] = true;
        parent[ci][cj] = dir[i];
      }
    }
  }
}

void solve() {
  int si = -1, sj = -1, di = -1, dj = -1;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
      if(grid[i][j]=='A')
        si = i, sj = j;
      if(grid[i][j]=='B')
        di = i, dj = j;
    }
  }
  if(si==-1 || di ==-1) {
    No;
    return;
  }
  memset(vis, false, sizeof(vis));
  memset(parent, 0, sizeof(parent));
  BFS(si, sj);
  if(vis[di][dj]) {
    Yes;
    string ans;
    int ci = di, cj = dj;
    while(ci!=si || cj!=sj) {
      ans += parent[ci][cj];
      if(parent[ci][cj]=='D')
        ci--;
      else if(parent[ci][cj]=='U')
        ci++;
      else if(parent[ci][cj]=='R')
        cj--;
      else if(parent[ci][cj]=='L')
        cj++;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << nl;
    cout << ans << nl;
  } else {
    No;
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