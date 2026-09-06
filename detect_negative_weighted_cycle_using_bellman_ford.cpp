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
#define srt(e) sort(all(e))
#define rsrt(e) sort(rall(e))
#define rvs(e) reverse(all(e))
#define sz(x) (int)((x).size())
#define nl '\n'
#define cinv(e) for(auto &x : (e)) cin >> x
#define coutv(e) for(auto &x : (e)) cout << x << ' '; cout << nl
#define coutvl(e) for(auto &x : (e)) cout << x << nl
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

class Edges {
  public:
    int a, b, c;
    Edges(int a, int b, int c) {
      this->a = a;
      this->b = b;
      this->c = c;
    }
};

int n, e;
vector<Edges> edge_list;
int dis[1001];

void bellman_ford() {
  for (int i = 0; i < n-1; i++) {
    for(auto edge: edge_list) {
      int a = edge.a;
      int b = edge.b;
      int c = edge.c;
      if(dis[a] != INT_MAX && dis[a]+c < dis[b]) {
        dis[b] = dis[a] + c;
      }
    }
  }
  bool cycle = false;
  for(auto edge: edge_list) {
    int a = edge.a;
    int b = edge.b;
    int c = edge.c;
    if(dis[a] != INT_MAX & dis[a]+c<dis[b])
      cycle = true;
  }
  if(cycle) {
    cout << "Negative weighted cycle detected\n";
  } else {
    for(int i = 0; i < n; i++) {
      cout << i << " -> " << dis[i] << endl;
    }
  }
}

void solve() {
  cin >> n >> e;
  while(e--) {
    int a, b, c;
    cin >> a >> b >> c;
    edge_list.push_back(Edges(a, b, c));
  }
  for(int i = 0; i < n; i++) {
    dis[i] = INT_MAX;
  }
  dis[0] = 0;
  bellman_ford();
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