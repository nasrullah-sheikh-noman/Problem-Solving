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

  int n; cin >> n;
  while(n--) {
    int s, y, p; cin >> s >> y >> p;
    int r = (s*y)/2;
    if(p > r) {
      cout << "YES\n";
    } else cout << "NO\n";
  }

  return 0;
}