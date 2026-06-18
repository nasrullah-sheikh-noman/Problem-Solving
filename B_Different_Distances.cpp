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
    vi ans;
    for(int i = 1; i <= n; i++) {
      ans.push_back(i);
    }
    for(int i = 1; i <= n; i++) {
      ans.push_back(i);
    }
    vi b3;
    for(int i = n; i > 0; i--) {
      b3.push_back(i);
    }
    if(n & 1) {
      swap(b3[n/2], b3[n-1]);
    }
    for(auto x : b3) {
      ans.push_back(x);
    }
    for(int i = 1; i <= n; i++) {
      ans.push_back(i);
    }
    for(int i = 0; i < (int)ans.size(); i++) {
      if(i) cout << " ";
      cout << ans[i];
    }
    cout << endl;
  }

  return 0;
}