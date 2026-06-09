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

ll ceil_div(ll a, ll b) {
  return (a+b-1)/b;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while(t--) {
    ll n, x, y, z; cin >> n >> x >> y >> z;
    ll t1 = ceil_div(n, x+y);
    ll t2 = LONG_LONG_MAX;
    ll f = x * z;
    if(f >= n) {
      t2 = z;
    } else {
      ll rem = n - f;
      ll ext = ceil_div(rem, (x+y*10));
      t2 = z + ext;
    }
    cout << min(t1, t2) << "\n";
  }

  return 0;
}