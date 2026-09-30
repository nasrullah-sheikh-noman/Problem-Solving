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

ll pre[500005];

void solve()
  {
    int n, i, j, k, x, p, q;
    string s;
    cin >> s;
    n = sz(s);
    ll ans = 0;
    for (i = 0; i < n; i++) {
      int cnt[26] = {};
      for (j = i; j < n; j++) {
        if(cnt[s[j]-'a']!=0) break;
        cnt[s[j]-'a']++;
      }
      ans += pre[j - i];
      ans %= 100007;
    }
    cout << ans << nl;
  }

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  for (int i = 0; i < 500005; i++) {
    pre[i] = i;
  }
  for (int i = 1; i < 500005; i++) {
    pre[i]+=pre[i-1];
  }

  for (int T = 1; T <= t; T++)
  {
    cout << "Case " << T << ": ";
    solve();
  }

  return 0;
}