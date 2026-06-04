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

  int a, b, c;
  cin >> a >> b >> c;
  if(a <= b && b <= c) cout << a << " " << b << " " << c << endl;
  else if (a <= c && c <= b) cout << a << " " << c << " " << b << endl;
  else if (c <= a && a <= b) cout << c << " " << a << " " << b << endl;
  else if (b <= a && a <= c) cout << b << " " << a << " " << c << endl;
  else if (b <= c && c <= a) cout << b << " " << c << " " << a << endl;
  else if (c <= b && b <= a) cout << c << " " << b << " " << a << endl;
  return 0;
}