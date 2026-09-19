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
  vi v(n);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }
  vl pre(n);
  pre[0] = v[0];
  for(int i = 1; i < n; i++) {
    pre[i]= pre[i-1]+v[i];
  }
  reverse(pre.begin(), pre.end());
  for(int i = 0; i < n; i++) {
    cout << pre[i] << " ";
  }

  return 0;
}