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

  int t;
  if(!(cin>> t)) return 0;
  while(t--) {
    ll x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    ll dx = x1 - x2;
    ll dy = y1 - y2;
    __int128 d2 = (__int128)dx * dx + (__int128)dy * dy;
    ll rsum = r1 + r2;
    ll rdif = r1 - r2;
    if(rdif < 0) rdif = -rdif;
    __int128 lo = (__int128)rdif * rdif;
    __int128 hi = (__int128)rsum * rsum;
    if(lo <= d2 && d2 <= hi) {
      cout << "Yes\n";
    } else cout << "No\n";

  }


  return 0;
}