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

void solve() {
  int n, q;
  cin >> n >> q;
  vi v(n+1);
  for (int i = 1; i <= n;i++)
    cin >> v[i];
  vi pre0(n + 1, 0);
  vi pre1(n + 1, 0);
  vi pre2(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    pre0[i] = pre0[i - 1];
    pre1[i] = pre1[i - 1];
    pre2[i] = pre2[i - 1];
    if(v[i]==0)
      pre0[i]++;
    else if(v[i]==1)
      pre1[i]++;
    else if(v[i]==2)
      pre2[i]++;
  }

  while (q--)
    {
      int a, b;
      cin >> a >> b;
      int cnt0 = pre0[b] - pre0[a - 1];
      int cnt1 = pre1[b] - pre1[a - 1];
      int cnt2 = pre2[b] - pre2[a - 1];
      if(cnt0==0)
        cout << 0 << nl;
      else if(cnt1==0)
        cout << 1 << nl;
      else if(cnt2==0)
        cout << 2 << nl;
      else
        cout << 3 << nl;
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