// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
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
    ll n, k; cin >> n >> k;
    vl s(k);
    for(auto &x : s) cin >> x;
    if(k == 1) {
      yes;
      continue;
    }
    vl d;
    for(int i = 1; i < k; i++) {
      d.pb(s[i]-s[i-1]);
    }
    bool ok = true;
    for(int i = 1; i < (int)d.size(); i++) {
      if(d[i] < d[i-1]) ok = false;
    }
    ll cnt = n-k+1;
    if(s[0] > d[0]*cnt) ok = false;
    cout << (ok ? "YES" : "NO") << endl;
  }

  return 0;
}