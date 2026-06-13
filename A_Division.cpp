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
    if(n >= 1900) {
      cout << "Division 1\n";
    } else if(n >= 1600) {
      cout << "Division 2\n";
    } else if(n >= 1400) {
      cout << "Division 3\n";
    } else {
      cout << "Division 4\n";
    }
  }

  return 0;
}