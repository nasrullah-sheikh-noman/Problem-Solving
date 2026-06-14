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
    int a, b, c, d; cin >> a >> b >> c >> d;
    int r = a -b;
    int r1 = c -d;
    int res = r+r1;
    if(res == 0) {
      cout << "NO\n";
    } else if(res < 0) {
      cout << "YES\n";
    } else cout << "NO\n";
  }

  return 0;
}