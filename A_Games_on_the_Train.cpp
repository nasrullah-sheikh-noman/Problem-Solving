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
    int mx = INT_MIN, mn = INT_MAX;
    for(int i = 0; i < n; i++) {
      int x; cin >> x;
      mx = max(mx, x);
      mn = min(mn, x);
    }
    cout << mx-mn+1 << endl;
  }

  return 0;
}