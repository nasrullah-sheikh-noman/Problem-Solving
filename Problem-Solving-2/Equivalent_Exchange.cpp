// Starting with the name of Almighty Allah
// Practice in the only shortcut  to improve
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
#define coutv(v) for(auto &x: v) cout << x << endl;
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
#define endl "\n" 
#define gcd(a, b) __gcd(a, b)
#define lcd(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
const int N = 1e5;
using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  ll pref = 0;
  ll mn = 0, mx = 0;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    pref+=x;
    mx = max(mx, pref);
    mn = min(mn, pref);

  }
  if((mx-mn) <= k) cout << "Yes\n";
  else cout << "No\n";

  
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while(t--) {
  // cout << "Case : " << t << " ";
    solve();
 
  }

  return 0;
}