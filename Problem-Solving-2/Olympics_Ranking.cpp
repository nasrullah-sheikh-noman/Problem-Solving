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
    int fs = a+b+c;
    int ls = d+e+f;
    if(fs>ls) {
      cout << "1\n";
    } else cout << "2\n";
  }

  return 0;
}