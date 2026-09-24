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
#define srt(arr) sort(all(arr))
#define rsrt(arr) sort(rall(arr))
#define rvs(arr) reverse(all(arr))
#define sz(x) (int)((x).size())
#define nl '\n'
#define cinv(arr) for(auto &x : (arr)) cin >> x
#define coutv(arr) for(auto &x : (arr)) cout << x << ' '; cout << nl
#define coutvl(arr) for(auto &x : (arr)) cout << x << nl
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

int arr[101];
int dp[1000001];

int rec(int x, int n) {
  if(x<0)
    return 0;
  if(x==0)
    return 1;
  if(dp[x]!=-1)
    return dp[x];
  ll sum = 0;
  for (int i = 0; i < n; i++) {
    sum += rec(x - arr[i], n);
    sum %= MOD;
  }
  return dp[x] = sum;
}

void solve() {
  int n, x;
  cin >> n >> x;
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  memset(dp, -1, sizeof(dp));
  cout << rec(x, n) << nl;
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