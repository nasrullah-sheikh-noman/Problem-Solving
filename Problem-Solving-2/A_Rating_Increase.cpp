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

  int t; cin >> t;
  while(t--) {
    string s; cin >> s;
    bool ok = false;
    for(int i = 1; i < (int)sz(s); i++) {
      string a = s.substr(0, i);
      string b = s.substr(i);
      if(a[0] == '0' || b[0] == '0') continue;
      ll x = stoll(a);
      ll y = stoll(b);
      if(y > x) {
        cout << x << " " << y << endl;
        ok = true;
        break;
      }
    }
    if(!ok) cout << "-1\n";
  }

  return 0;
}