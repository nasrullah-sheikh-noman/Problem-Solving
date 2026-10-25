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

int arr[1005];
int dp[1005][1005];

bool subset_sum(int i, int sum) {
  if(i<0) {
    if(sum==0)
      return true;
    else
      return false;
  }
  if(dp[i][sum]!=-1) {
    return dp[i][sum];
  }
  if(arr[i]<=sum) {
    bool op1 = subset_sum(i - 1, sum - arr[i]);
    bool op2 = subset_sum(i - 1, sum);
    dp[i][sum] = op1 || op2;
    return dp[i][sum];
  } else {
    dp[i][sum] = subset_sum(i - 1, sum);
    return dp[i][sum];
  }
}

void solve() {
  int n, i, j, k, x, p, q, m, l, r;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    arr[i] = x;
  }
  int sum;
  cin >> sum;
  for (i = 0; i <= n; i++) {
    for (j = 0; j <= sum; j++) {
      dp[i][j] = -1;
    }
  }
  if (subset_sum(n - 1, sum))
    {
      yes;
    } else {
    no;
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