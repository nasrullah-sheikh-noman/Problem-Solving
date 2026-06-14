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
    int s, n; cin >> s >> n;
    int r = s - (n-1);
    int r1 = s - ((n-1)*2);
    if(r >= 1 && r%2 == 1) {
      cout << "YES\n";
      for(int i = 1; i < n; i++) {
        cout << "1 ";
      }
      cout << r << endl;
    } else if(r1 >= 2 && r1%2 == 0) {
      cout << "YES\n";
      for(int i = 1; i < n; i++) {
        cout << "2 ";
      }
      cout << r1 << endl;
    } else cout << "NO\n";
  
  }

  return 0;
}