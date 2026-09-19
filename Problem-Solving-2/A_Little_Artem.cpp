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
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++){
        if(i == 0 && j == 0) {
          cout << "W";
        } else cout << "B";
      }
      cout << endl;
    }
  }

  return 0;
}