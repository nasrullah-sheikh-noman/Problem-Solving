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

vector<pair<int, int>> adj_list[100001];
ll dis[100001];
int parent[100001];

void dijkstra(int src) {
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
  pq.push({0, src});
  dis[src] = 0;
  while(!pq.empty()) {
    pair<ll, int> par = pq.top();
    pq.pop();
    ll par_dis = par.first;
    int par_node = par.second;
    if(par_dis>dis[par_node]) continue;
    for(auto child: adj_list[par_node]) {
      int child_node = child.first;
      int child_dis = child.second;
      if(child_dis+par_dis<dis[child_node]) {
        dis[child_node] = child_dis + par_dis;
        parent[child_node] = par_node;
        pq.push({dis[child_node], child_node});
      }
    }
  }
}

void solve() {
  int n, m;
  cin >> n >> m;
  while(m--) {
    int a, b, c;
    cin >> a >> b >> c;
    adj_list[a].emplace_back(b, c);
    adj_list[b].emplace_back(a, c);
  }
  for(int i = 1; i <= n; i++) {
    dis[i] = LINF;
    parent[i] = -1;
  }
  dijkstra(1);
  if(dis[n]==LINF)
    cout << -1 << nl;
  else {
    vi path;
    int curr = n;
    while(curr!=-1) {
      path.push_back(curr);
      if(curr==1) break;
      curr = parent[curr];
    }
    reverse(all(path));
    coutv(path);
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