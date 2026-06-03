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
    vc<ll> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    ll sum = 0;
    ll x = 0;
    for(int i = 0; i < n; i++) {
      sum+=v[i];
      x^=v[i];
    }
    if(sum == x) cout << "Yes\n";
    else cout << "No\n";
  }

  return 0;
}