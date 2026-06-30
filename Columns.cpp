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

  ll x; cin >> x;
  int n; cin >> n;
  ll arr[n][n];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    bool ok = false;
    for(int j = 0; j < n; j++) {
      if(arr[j][i] == x)  {
        ok = true;
        break;
      }
    }
    if(ok) cout << "YES\n";
    else cout << "NO\n";
  }

  return 0;
}