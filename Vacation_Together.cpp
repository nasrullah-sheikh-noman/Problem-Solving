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

  int n, d; cin >> n >> d;
  vc<string> v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int ans = 0, cnt = 0;
  for(int i = 0; i < d; i++) {
    bool ok = true;
    for(int j = 0; j < n; j++) {
      if(v[j][i] == 'x') {
        ok = false;
        break;
      }
    }
    if(ok) {
      cnt++;
      ans = max(ans, cnt);
    } else cnt = 0;
  }
  cout << ans << endl;
  return 0;
}