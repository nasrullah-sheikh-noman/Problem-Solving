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

  int a, c;
  char b; cin >> a >> b >> c;
  if(b == '>') {
    if(a > c) {
      cout << "Right\n";
    } else cout << "Wrong\n";
  }
  if(b == '<') {
    if(a < c) {
      cout << "Right\n";
    } else cout << "Wrong\n";
  }
  if(b == '=') {
    if(a == c) {
      cout << "Right\n";
    } else cout << "Wrong\n";
  }

  return 0;
}