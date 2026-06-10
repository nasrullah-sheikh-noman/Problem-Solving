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
    int n, k; cin >> n >> k;
    vl s(n+1, 0);
    vi o;
    int dir = 1;
    while((int)o.size() < k) {
      if(dir == 1) {
        for(int i = 1; i <= n && o.size() < k; i++)
          o.push_back(i);
        dir = -1;
      } else {
        for(int i = n; i >= 1 && o.size() < k; i--)
          o.push_back(i);
        dir = 1;
      }
    }
    int c = k;
    for(int i = 0; i < k; i++) {
      s[o[i]] += c;
      c--;
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
      ans = max(ans, s[i]);
    }
    cout << ans << "\n";
  }

  return 0;
}