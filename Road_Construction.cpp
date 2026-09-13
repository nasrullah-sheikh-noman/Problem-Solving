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

int par[100001];
int group_size[100001];
int cmp, mx;

int find(int node) {
  if(par[node]==-1)
    return node;
  int leader = find(par[node]);
  par[node] = leader;
  return leader;
}

void DSU_union(int node1, int node2) {
  int leader1 = find(node1);
  int leader2 = find(node2);
  if(group_size[leader1]>=group_size[leader2]) {
    par[leader2] = leader1;
    group_size[leader1] += group_size[leader2];
    mx = max(mx, group_size[leader1]);
  } else {
    par[leader1] = leader2;
    group_size[leader2] += group_size[leader1];
    mx = max(mx, group_size[leader2]);
  }
  cmp--;
}

void solve() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    par[i] = -1;
    group_size[i] = 1;
  }
  cmp = n;
  mx = 1;
  int a, b;
  while(m--) {
    cin >> a >> b;
    int leader1 = find(a);
    int leader2 = find(b);
    if(leader1!=leader2) DSU_union(a, b);
    cout << cmp << " " << mx << nl;
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