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

  char a, b, c, d; cin >> a >> b >> c >> d;
  int f = abs(b - a);
  int l = abs(d - c);
  if((f == 1 || f == 4) && (l == 1 || l == 4)) cout << "Yes\n";
  else if((f == 2 || f == 3) && (l == 2 || l == 3)) cout << "Yes\n";
  else cout << "No\n";

  return 0;
}