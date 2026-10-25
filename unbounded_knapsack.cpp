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

int n, max_weight;
int val[1001];
int weight[1001];
int dp[1001][1001];

int Unbounded_knapsack(int i , int max_weight) {
  if(i < 0 || max_weight <= 0)
    return 0;
  if(dp[i][max_weight] != -1) {
    return dp[i][max_weight];
  }
  if(weight[i] <= max_weight) {
    int op1 = Unbounded_knapsack(i, max_weight - weight[i]) + val[i];
    int op2 = Unbounded_knapsack(i - 1, max_weight);
    return dp[i][max_weight] = max(op1, op2);
  } else {
    return dp[i][max_weight] = Unbounded_knapsack(i - 1, max_weight);
  }
}

void solve() {
  int i, j, k, x, p, q, m, l, r;
  cin >> n;
  for (i = 0; i < n; i++) {
    cin >> val[i];
  }
  for (i = 0; i < n; i++) {
    cin >> weight[i];
  }
  cin >> max_weight;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= max_weight; j++) {
      dp[i][j] = -1;
    }
  }
  cout << Unbounded_knapsack(n - 1, max_weight);
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