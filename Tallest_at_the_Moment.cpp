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
  vl arrh(n), arrl(n);
  for(int i = 0; i < n; i++) {
    cin >> arrh[i] >> arrl[i];
  }
  vl s(n);
  s[n-1] = arrh[n-1];
  for(int i = n-2; i >= 0; i--) {
    s[i] = max(s[i+1], arrh[i]);
  }

  int q; cin >> q;
  while(q--) {
    ll t; cin >> t;
    int pos = upper_bound(arrl.begin(), arrl.end(), t) - arrl.begin();
    cout << s[pos] << endl;
  }

  return 0;
}