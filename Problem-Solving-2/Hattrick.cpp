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
    char a, b, c, d, e, f; cin >> a >> b >> c >> d >> e >> f;
    if(a == 'W' && b == 'W' && c == 'W') {
      cout << "YES\n";
    } else if(b == 'W' && c == 'W' && d == 'W') {
      cout << "YES\n";
    } else if(c == 'W' && d == 'W' && e == 'W') {
      cout << "YES\n";
    } else if(d == 'W' && e == 'W' && f == 'W') {
      cout << "YES\n";
    } else cout << "NO\n";
  }

  return 0;
}