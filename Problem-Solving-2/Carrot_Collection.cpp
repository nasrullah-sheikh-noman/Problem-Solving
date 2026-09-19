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
    int n, l, r; cin >> n >> l >> r;
    vi v(n+1);
    for(int i = 1; i <= n; i++) {
      cin >> v[i];
    }
    int ls = 0;
    int rs = 0;
    for(int i = 1; i < l ; i++) {
      ls+=v[i];
    }
    for(int i = r+1; i <= n; i++) {
      rs+=v[i];
    }
    cout << max(ls, rs) << endl;
  }

  return 0;
}