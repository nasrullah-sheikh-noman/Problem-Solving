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

void conquer(vector<int> &v, int l, int mid, int r) {
  int i = l, j = mid + 1;
  vector<int> tmp;
  while(i <= mid && j <= r) {
    if(v[i]<=v[j]) {
      tmp.push_back(v[i++]);
    } else {
      tmp.push_back(v[j++]);
    }
  }
  while(i<=mid) {
    tmp.push_back(v[i++]);
  }
  while(j<=r) {
    tmp.push_back(v[j++]);
  }
  int n = tmp.size();
  for (int k = 0; k < n; k++) {
    v[l+k] = tmp[k];
  }
}

void divide(vector<int> &v, int l, int r) {
  if(l<r) {
    int mid = l + (r - l) / 2;
    divide(v, l, mid);
    divide(v, mid + 1, r);
    conquer(v, l, mid, r);
  } 
}

void solve() {
  int n, i, j, k, x, p, q, m, l, r;
  cin >> n;
  vector<int> v(n);
  for (i = 0; i < n; i++) {
    cin >> v[i];
  }
  divide(v, 0, n - 1);
  for (i = 0; i < n; i++) {
    cout << v[i] << " ";
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