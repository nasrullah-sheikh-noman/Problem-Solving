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

  int n; cin >> n;
  vi v(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  int q; cin >> q;
  sort(v.begin(), v.end());
  while(q--) {
    int x; cin >> x;
    int l = 0, r = n-1;
    bool ok = true;
    for(int i = 0; i < n; i++) {
      int mid = (l+r)/2;
      if(mid == x) {
        cout << "YES\n";
        ok = false;
        break;
      } else if(mid> x) r = mid;
      else l = mid;
    }
    if(ok) cout << "NO\n";
  }

  return 0;
}