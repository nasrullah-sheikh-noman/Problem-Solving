// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define i8 __int128_t
#define ui8 __uint128_t
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define ul unsigned ll
#define vu vc<ul>
#define endl "\n" 
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vl v(n);
    for(auto &x : v) cin >> x;
    vl d(n-1);
    vi neg;
    ll r = 0;
    for(int i = 0; i < n-1; i++) {
      d[i] = v[i+1] - v[i];
      if(d[i] < 0) {
        neg.pb(i);
        r = max(r, -d[i]);
      }
    }
    if(sz(neg) <= 1) {
      cout << "YES\n";
      continue;
    } 
    ll u = (ll)4e18;
    for(int i = 0; i+1 < sz(neg); i++) {
      int l = neg[i];
      int rPos = neg[i+1];
      ll mx = -(ll)4e18;
      for(int j = l+1; j < rPos; j++) {
        mx = max(mx, d[j]);

      }
      u = min(u, mx);
    }
    cout << (r <= u ? "YES\n" : "NO\n");

  }

  return 0;
}