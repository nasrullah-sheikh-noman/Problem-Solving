// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll ll)x.size()
#define vc vector
#define vi vc<int>
#define vl vc<ll ll>
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
    int n;
    unsigned ll w;
    cin >> n >> w;
    vector<unsigned ll > we(n+1), v(n+1);
    for(int i = 1; i <= n; i++) {
      cin >> we[i] >> v[i];
    }
    vi c(n+1, 0);
    unsigned ll rem = w;
    for(int i = n; i >= 1; i--) {
      if(rem>=we[i]) {
        c[i] = 1;
        rem -= we[i];
      }
    }
    const __int128_t NEG = -(__int128_t)4e18;
    __int128_t tight = 0;
    __int128_t loose = NEG;
    
    for(int i = n; i >= 1; i--) {
      __int128_t nt = NEG, nl = NEG;
      if(loose != NEG) {
        nl = max(nl, loose+(__int128_t)v[i]);
        nl = max(nl, loose);
      }
      if(c[i] == 0) {
        nt = max(nt, tight);
      } else {
        nt = max(nt, tight+(__int128_t)v[i]);
        nl = max(nl, tight);
      }
      tight = nt;
      loose = nl;
    }
    __int128_t ans = max(tight, loose);
    cout << (unsigned ll )ans << endl;
  }

  return 0;
}