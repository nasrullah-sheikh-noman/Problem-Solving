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
    int m = n;
    int cnt = 0;
    while(m > 0) {
      int d = m%10;
      m/=10;
      if(d > 0) {
        cnt++;
      }
    }
    cout << cnt << endl;
    int z = 0;
    while(n > 0) {
      int d = n%10;
      if(d != 0) {
        cout << d ;
        for(int i = 0; i < z; i++) {
          cout << "0";
        }
        cout << " ";
      }
      z++;
      n/=10;
    }
    cout << endl;
  }

  return 0;
}