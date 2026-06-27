// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
#define vc vector
#define vi vc<int>
#define vl vc<ll>
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
    int n, k; cin >> n >> k;
    ll ans = 0;
    for(ll i = 1; i <= n; i<<=1) {
      ll full = k * i;
      if(n>=full) {
        ans+=k;
        n-=full;
      } else {
        ans+=n/i;
        break;
      }
      if(i>(long long) 1e18/2) break;
    }
    cout << ans << endl;
  }

  return 0;
}