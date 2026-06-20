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
  char ch; cin >> ch;
  int l = (int)ch - 65;
  for(int i = 1; i <= n; i++) {
    string s; cin >> s;
    if(s[l] == 'o') {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}