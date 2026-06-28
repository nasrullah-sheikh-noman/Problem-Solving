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
    int n, c; cin >> n >> c;
    vi a(n), b(n);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;

    const ll INF = 1e18;
    ll ans = INF;

    bool ok = true;
    ll cost = 0;
    for(int i = 0; i < n; i++) {
      if(a[i] < b[i]) ok = false;
      cost += a[i] - b[i];
    }
    if(ok) ans = min(ans, cost);

    vi sa=a, sb=b;
    sort(all(sa));
    sort(all(sb));
    ok = true;
    for(int i = 0; i <n; i++) {
      if(sa[i] < sb[i]) {
        ok = false;
        break;
      }
    }
    if(ok) {
      ll sumA = accumulate(a.begin(), a.end(), 0LL);
      ll sumB = accumulate(b.begin(), b.end(), 0LL);
      ans = min(ans, (ll)c + (sumA - sumB));

    }
    cout << (ans == INF ? -1 : ans ) << endl; 
  }

  return 0;
}