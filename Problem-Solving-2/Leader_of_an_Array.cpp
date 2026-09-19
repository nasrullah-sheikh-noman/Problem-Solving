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

  int n; cin >> n;
  vi v(n);
  for(auto &x: v) cin >> x;
  vl leader;
  ll mx = LLONG_MIN;
  for(int i = n-1; i >= 0; i--) {
    if(v[i]>mx) {
      leader.push_back(v[i]);
      mx = v[i];
    }
  }
  reverse(leader.begin(), leader.end());
  for(auto x: leader) cout << x << " ";

  return 0;
}