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

  int n; cin >> n;
  vi arr(n);
  for(int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  ll cur = 0;
  ll best = LLONG_MIN;
  for(auto x: arr) {
    cur+=x;
    best = max(best, cur);
    if(cur < 0) cur = 0;
  }
  cout << best << endl;
  return 0;
}