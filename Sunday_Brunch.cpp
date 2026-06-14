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
  while(n--) {
    int t, p; cin >> t >> p;
    int r = t/p;
    if(r <= 20) {
      cout << r << endl;
    } else cout << "20\n";
  }

  return 0;
}