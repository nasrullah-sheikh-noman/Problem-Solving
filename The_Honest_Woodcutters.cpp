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
  vc<int> w(n+1);
  vc<int> e(n+1);
  for(int i = 0; i < n; i++) {
    cin >> w[i];
    w[i]--;
  }
  for(int i = 0; i < n; i++) {
    cin >> e[i];
    e[i]--;
  }
  for(int i = 0;  i < n; i++) {
    if(e[w[i]] != i) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}