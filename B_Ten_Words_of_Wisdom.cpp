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
    int ans = 0;
    int mx = INT_MIN;
    for(int i = 1; i <= n; i++) {
      int x, y; cin >> x >> y;
      if(x <= 10 && y > mx) {
        mx = y;
        ans = i;
      }

    }
    cout << ans << endl;
  }

  return 0;
}