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
  int arr[n];
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
    for(int j = 1; j <= arr[i]; j++) {
      string m = to_string(i);
      string d = to_string(j);
      char c = m[0];
      bool ok = true;
      for(auto x : d) {
        if(x!=c) ok = false;
      }
      for(auto x : m) {
        if(x!=c) ok = false;
      }
      if(ok) cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}