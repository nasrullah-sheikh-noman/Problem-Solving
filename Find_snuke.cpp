// Starting with the name of Almighty Allah
// Practice in the only shortcut to improve
#include <bits/stdc++.h>
#define ll long long
#define i8 __int128_t
#define ui8 __uint128_t
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
#define F first
#define S second
#define nl '\n'
#define cinv(v) for(auto &x: v) cin >> x;
#define coutvl(v) for(auto &x: v) cout << x << nl;
#define coutv(v) for(auto &x: v) cout << x << " "; cout << nl; 
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mp(x, y) make_pair(x, y)
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define ld long double
#define ul unsigned ll
#define vu vc<ul>
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcd(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define yes cout << "Yes" << nl; 
#define Yes cout << "YES" << nl; 
#define no cout << "No" << nl; 
#define No cout << "NO" << nl; 
const int N = 1e5;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r) {
  return uniform_int_distribution<int>(l, r)(rng);
}

void solve() {
  int h, w; cin >> h >> w;
  vc<string> grid(h);
  cinv(grid);
  string target = "snuke";
  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(grid[i][j] != 's') continue;
      for(int d = 0; d < 8; d++) {
        bool ok = true;
        for(int k = 0; k < 5; k++) {
          int ni = i + dx[d] * k;
          int nj = j + dy[d] * k;
          if(ni < 0 || ni >= h || nj < 0 || nj >= w) {
            ok = false;
            break;
          }
          if(grid[ni][nj] != target[k]) {
            ok = false;
            break;
          }
        }
        if(ok) {
          for(int k = 0; k < 5; k++) {
            cout << i + dx[d] * k + 1 << " " << j + dy[d] * k + 1 << nl;
          }
          return;
        }
      }
    }
  }

}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while(t--) {
  // cout << "Case : " << t << " ";
    solve();
 
  }

  return 0;
}