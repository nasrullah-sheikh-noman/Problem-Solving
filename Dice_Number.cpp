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
    int a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    int mx = a, mn = a;
    if(b > mx) {
      mx = b;
    } 
    if(c > mx) {
      mx = c;
    }
    if(b < mn) mn = b;
    if(c < mn) mn = c;
    int md = (a+b+c) - mx - mn;
    int p1 = (mx*100) + (md*10) + mn;
    mx = d, mn = d;
    if(e > mx) mx = e;
    if(f > mx) mx = f;
    if(e < mn) mn = e;
    if(f < mn) mn = f;
    md = (d+e+f) - mn - mx;
    int p2 = (mx*100) + (md*10) + mn;
    if(p1 > p2) {
      cout << "Alice" << endl;
    } else if(p2 > p1) {
      cout << "Bob" << endl;
    } else cout << "Tie\n";
  }

  return 0;
}