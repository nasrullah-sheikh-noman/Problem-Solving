// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define szl(x) (ll)x.size()
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
    int n; cin >> n;
    vi v1(n);
    for(int i = 0; i < n; i++) {
      cin >> v1[i];
    }
    vi v2(v1);
    bool ok = true;
    sort(v1.begin(), v1.end());
    for(int i = 0; i < n; i++) {
      if(v1[i] != v2[i]) {
        cout << "NO\n";
        ok = false;
        break;
      }
    }
    if(ok) cout << "YES\n";
  }

  return 0;
}