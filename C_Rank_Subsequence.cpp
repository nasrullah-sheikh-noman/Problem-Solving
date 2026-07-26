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

struct card {
  int l, r, u, v;
};

bool dp[5005][5005];

void solve() {
    int n;
    cin >> n;
    vc<card> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i].l >> v[i].r >> v[i].u >> v[i].v;
    }

    for (int j = 0; j <= n; j++) {
        for (int m = 0; m <= n; m++) {
            dp[j][m] = false;
        }
    }

    for (int m = 1; m <= n; m++) {
        dp[0][m] = true;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j >= 1; j--) {
            if (j >= v[i].l && j <= v[i].r)
                continue;

            for (int m = j; m <= n; m++) {
                if (dp[j - 1][m]) {
                    int rr = m - j + 1;
                    if (rr < v[i].u || rr > v[i].v) {
                        dp[j][m] = true;
                    }
                }
            }
        }
    }

    for (int m = n; m >= 0; m--) {
        if (m == 0 || dp[m][m]) {
            cout << m << nl;
            return;
        }
    }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}