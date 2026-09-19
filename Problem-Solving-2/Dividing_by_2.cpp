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
    int n; cin >> n;
    vi v(n);
    unordered_map<int, int> cnt;
    unordered_map<int, ll> cost;
    for(int i = 0; i < n; i++) {
      cin >> v[i];
      int x = v[i];
      int ops = 0;
      while(true) {
        cnt[x]++;
        cost[x]+=ops;
        if(x == 0) break;
        x/=2;
        ops++;
      }
    }
    ll ans = LLONG_MAX;
    for(auto &[val, c] : cnt) {
      if(c == n) {
        ans = min(ans, cost[val]);
      }
    }
    cout << ans << endl;
  }

  return 0;
}