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

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    vc<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int ans = 1;
    if(v.size() >= 2) {
      if(v[0] >= v[1]) {
        for(int i = 0; i < n-2; i++) {
          if(v[i+2] != (v[i] % v[i+1])) {
            ans = 0;
          }
        }
      }
    }
    if(ans == 1) {
      cout << v[0] << " " << v[1] << endl;
    } else cout << "-1" << endl;
  }

  return 0;
}