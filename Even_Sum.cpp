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
    vc<int> v(n);
    for(int i = 0; i < n; i++) {
      cin >> v[i];
    }
    int total = 0;
    for(int i = 0; i < n; i++){
      total += v[i];
    }
    bool ok = true;
    for(int i = 0; i < n; i++) {
      if((total - v[i])%2 == 0){
        ok = false;
        break; 
      }
    }
    if(ok == false) cout << "Yes\n";
    else cout << "No\n";
  }

  return 0;
}