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

  int n; cin >> n;
  for(int i = 0; i < n/2; i++) {
    for(int j = 0; j < i; j++) {
      cout << " ";
    }
    cout << "\\";
    for(int j = n-(2*i)-1; j > 1; j--) {
      cout << " ";
    }
    cout << "/";
    cout << endl;
  }
  for(int i = 0; i < n/2; i++) cout << " ";
  cout << "X" << endl;

  for(int i = 0; i < n/2; i++) {
    for(int j = (n/2)-i-1; j > 0; j--) {
      cout << " ";
    }
    cout << "/";
      for(int j = 0; j < (2*i)+1; j++) {
        cout << " ";
      }
    
    cout << "\\";
    cout << endl;
  }

  return 0;
}