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
    int freq[n+1] = {};
    for(int i = 0; i < n; i++) {
      int x; cin >> x;
      freq[x]++;
    }
    int ans = -1;
    for(int i = 1; i <= n; i++) {
      if(freq[i] >= 3) {
        ans = i;
        break;
      }
    }
    cout << ans << endl;
  }

  return 0;
}