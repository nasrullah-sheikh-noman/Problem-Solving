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
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vi cnt(k, 0);
    for(int i = 0; i < n; i++) {
      if(s[i] == '1') {
        cnt[i%k]++;
      }
    }
    bool ok = true;
    for(auto x : cnt) {
      if(x%2) {
        ok = false;
        break;
      }
    }
    cout << (ok ? "YES\n" : "NO\n");
  }

  return 0;
}