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
  ll arr[n], arr2[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
    arr2[i] = arr[i];
  }
  sort(arr2,arr2+n);
  ll pref[n];
  pref[0]=arr2[0];
  for(int i = 1; i < n; i++) {
    pref[i] = pref[i-1]+arr2[i];
  }
  ll total = pref[n-1];
  for(int i = 0; i < n; i++) {
    int pos = upper_bound(arr2, arr2+n, arr[i]) - arr2;
    ll ans = 0;
    if(pos == n) {
      ans = 0;
    } else if (pos == 0) {
      ans = total;
    } else {
      ans = total - pref[pos-1];
    }
    cout << ans << " ";
  }

  return 0;
}