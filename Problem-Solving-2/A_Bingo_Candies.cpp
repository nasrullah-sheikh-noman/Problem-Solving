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
    unordered_map<int, int> cnt;
    int mx = 0;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        int x; cin >> x;
        mx = max(mx, ++cnt[x]);
      }
    }
    if(mx > n*(n-1)) cout << "NO\n";
    else cout << "YES\n";
  }

  return 0;
}