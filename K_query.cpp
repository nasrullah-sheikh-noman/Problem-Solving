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

int n, q, arr[30005], ms[17][30005];

void merge(int l, int mid, int r, int d) {
  int i = l, j = mid + 1, k = l;
  while(i<=mid && j <= r) {
    if(ms[d+1][i]<=ms[d+1][j]) {
      ms[d][k] = ms[d + 1][i];
      k++;
      i++;
    } else {
      ms[d][k] = ms[d + 1][j];
      j++;
      k++;
    }
  }
  while(i<=mid) {
    ms[d][k] = ms[d + 1][i];
    i++;
    k++;
  }
  while(j<=r) {
    ms[d][k] = ms[d + 1][j];
    j++;
    k++;
  }
}

void mergeSort(int l, int r, int d) {
  if(l==r) {
    ms[d][l] = arr[l];
    return;
  }
  if(l<r) {
    int mid = l + (r - l) / 2;
    mergeSort(l, mid, d + 1);
    mergeSort(mid + 1, r, d + 1);
    merge(l, mid, r, d);
  }
}

int query(int l, int r, int d, int i, int j, int k) {
  if(r<i || j<l)
    return 0;
  if(i<=l && r<=j) {
    int idx = upper_bound(ms[d] + l, ms[d] + r + 1, k) - (ms[d]+l);
    return (r - l + 1) - idx;
  }
  int mid = l + (r - l) / 2;
  return query(l, mid, d + 1, i, j, k) + query(mid + 1, r, d + 1, i, j, k);
}

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> arr[i];
  mergeSort(1, n, 0);
  cin >> q;
  while(q--) {
    int i, j, k;
    cin >> i >> j >> k;
    cout << query(1, n, 0, i, j, k) << nl;
  }

  // Brute Force Way

  // int n;
  // cin >> n;
  // vi arr(n);
  // cinv(arr);
  // int q;
  // cin >> q;
  // int i, j, k, cnt = 0;
  // while(q--) {
  //   cin >> i >> j >> k;
  //   i--;
  //   for (; i < min(j, n); i++) {
  //     if(arr[i]>k)
  //       cnt++;
  //   }
  //   cout << cnt << nl;
  //   cnt = 0;
  // }
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