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
  vi r[n+1];
  for(int i = 1; i <= n; i++) {
    int k; cin >> k;
    while(k--) {
      int x; cin >> x;
      r[x].push_back(i);
    }
  }
  for(int i = 1; i <= n; i++) {
    cout << r[i].size();
    for(int p : r[i]) {
      cout << " " << p;
    }
    cout << "\n";
  }
  return 0;
}