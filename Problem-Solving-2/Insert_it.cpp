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
  vi v1(n);
  for(int i = 0; i < n; i++) {
    cin >> v1[i];
  }
  int m; cin >> m;
  vi v2(m);
  for(int i = 0; i < m; i++) {
    cin >> v2[i];
  }
  int x; cin >> x;
  bool ok = true;
  for(int i = 0; i < n; i++) {
    if(i == x) {
      ok = false;
      for(int i = 0; i < m; i++) {
        cout << v2[i] << " ";
      }
    }
    cout << v1[i] << " ";
  }
  if(ok) {
    for(int i = 0; i < m; i++) {
      cout << v2[i] << " ";
    }
  }

  return 0;
}