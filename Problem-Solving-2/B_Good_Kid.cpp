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
    ll arr[n];
    int pos = 0;
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
      if(arr[i] < arr[pos]) {
        pos = i;
      }
    }
    arr[pos]++;
    ll sum = 1;
    for(int i = 0; i < n; i++) {
      sum*=arr[i];
    }
    cout << sum << endl;
  }

  return 0;
}