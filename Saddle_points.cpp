// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define i8 __int128_t
#define ui8 __uint128_t
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define ul unsigned ll
#define vu vc<ul>
#define endl "\n" 
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m; cin >> n >> m;
  vc<vi> a(n, vi(m));
  vi rowMin(n, INT_MAX);
  vi colMax(m, INT_MIN);

  for(int i = 0; i < n;i++) {
    for(int j = 0; j < m; j++) {
      cin >> a[i][j];
      rowMin[i] = min(rowMin[i], a[i][j]);
      colMax[j] = max(colMax[j], a[i][j]);
    }
  }
  ll cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(a[i][j] == rowMin[i] && a[i][j] == colMax[j]) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}