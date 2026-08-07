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

void insert_at_max_heap(vi &v, int val) {
  v.pb(val);
  int cur_idx = sz(v) - 1;
  while(cur_idx!=0) {
    int par_idx = (cur_idx-1)/2;
    if(v[par_idx] < v[cur_idx]) {
      swap(v[par_idx], v[cur_idx]);
      cur_idx = par_idx;
    } else break;
  }
} 

void print_max_heap(vi v) {
  for(int x: v)
    cout << x << " ";
  cout << nl;
}

void delete_max_heap(vi &v) {
  if(v.empty())
    return;
  v[0] = v.back();
  v.pop_back();
  int cur_idx = 0;
  while(1) {
    int left_idx = cur_idx * 2 + 1;
    int right_idx = cur_idx * 2 + 2;
    int left_val = INT_MIN, right_val = INT_MIN;
    if(left_idx < v.size())
      left_val = v[left_idx];
    if(right_idx < v.size())
      right_val = v[right_idx];
    if(left_val >= right_val && left_val > v[cur_idx]) {
      swap(v[cur_idx], v[left_idx]);
      cur_idx = left_idx;
    } else if(right_val > left_val && right_val > v[cur_idx]) {
      swap(v[cur_idx], v[right_idx]);
      cur_idx = right_idx;
    } else break;
  }
}

void solve() {
  int n; cin >> n;
  vi v;
  for(int i = 0; i < n; i++) {
    int val;
    cin >> val;
    insert_at_max_heap(v, val);
  }
  print_max_heap(v);
  delete_max_heap(v);
  print_max_heap(v);
  delete_max_heap(v);
  print_max_heap(v);
  delete_max_heap(v);
  print_max_heap(v);
  delete_max_heap(v);
  print_max_heap(v);
  delete_max_heap(v);
  print_max_heap(v);
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