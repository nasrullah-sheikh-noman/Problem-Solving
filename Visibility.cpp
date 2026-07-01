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

  int n, m, x, y; cin >> n >> m >> x >> y;
  vc<vc<char>> v(n, vc<char>(m));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> v[i][j];
    }
  }
  x--;
  y--;
  int ans = 1;
  for(int i = x-1; i >= 0; i--) {
    if(v[i][y] == '#') break;
    ans++;
  }
  for(int i = x+1; i < n; i++) {
    if(v[i][y] == '#') break;
    ans++;
  }
  for(int i = y-1; i >= 0; i--) {
    if(v[x][i] == '#') break;
    ans++;
  }
  for(int i = y+1; i < m; i++) {
    if(v[x][i] == '#') break;
    ans++;
  }
  cout << ans << endl;
  return 0;
}