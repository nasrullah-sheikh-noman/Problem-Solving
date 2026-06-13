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
  vi v(n+1);
  for(int i = 0; i < n; i++) {
    int x, y; cin >> x >> y;
    v[x] = y;
  }
  int mn = INT_MAX;
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    if(v[i] < mn) {
      ans++;
      mn = v[i];
    }
  }
  cout << ans << endl;
  return 0;
}