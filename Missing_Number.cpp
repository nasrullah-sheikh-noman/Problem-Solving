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

  ll n; cin >> n;
  ll total = n*(n+1)/2;
  ll sum = 0;
  for(int i = 0; i < n-1; i++) {
    ll x; cin >> x; 
    sum+=x;
  }  
  cout << total-sum << endl;
  return 0;
}